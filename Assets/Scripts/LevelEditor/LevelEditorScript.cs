#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using System.Linq;
using Data;
using Infrastructure.AssetManagement;
using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;

namespace LevelEditor
{
  [ExecuteInEditMode]
  public class LevelEditorScript : MonoBehaviour
  {
    [SerializeField]private string[] _assetPath;
    [SerializeField] private LevelData _levelData;
    [SerializeField, FoldoutGroup("Tools")]private int _pathNumber;
    [SerializeField] private string _levelName;
    [SerializeField] private Transform _playerSpawnPosition;
    [SerializeField] private List<EnemySpawnPoint> _enemySpawnPoints = new List<EnemySpawnPoint>();
    [TableList(ShowPaging = true, DrawScrollView = true)]
    public List<EditorPrefab> Prefabs = new List<EditorPrefab>();

    private List<GameObject> _spawnedObjects = new List<GameObject>();
    private Dictionary<GameObject, string> _pathDictionary = new Dictionary<GameObject,string>();
    private static EditorPrefab _selectedPrefab;
    private static LevelEditorScript _editor;

    [Button(ButtonSizes.Large), FoldoutGroup("Tools")]
    public void LoadAssets()
    {
      Prefabs = new List<EditorPrefab>();
      foreach (var asset in AssetDatabase.FindAssets("t:GameObject", new []{_assetPath[_pathNumber]}))
      {
        var path = AssetDatabase.GUIDToAssetPath(asset);
        var obj = (GameObject)AssetDatabase.LoadMainAssetAtPath(path);
        Prefabs.Add(new EditorPrefab(obj,path, InstantiatePrefab,SelectEditorPrefab));
      }
    }

  
    [Button(ButtonSizes.Large), FoldoutGroup("Tools")]
    public void SaveLevel()
    {
      var position = _playerSpawnPosition.position;
      _levelData.StartPosition = new Vector3Data(position.x,position.y, position.z);
      _levelData.PlayerPrefabPath = AssetPath.PrefabsPlayer;
      _levelData.LevelName = _levelName;
      var objectsList = new List<LevelObject>();
      foreach (var go in _spawnedObjects)
      {
        var path = _pathDictionary[go];
        objectsList.Add(new LevelObject
        {
          Position = go.transform.position,
          Rotation = go.transform.rotation,
          PrefabPath =path,
        });
      }
      _levelData.LevelObjects = objectsList.ToArray();

      var spawnPoints = new List<EnemyObject>();
      foreach (var point in _enemySpawnPoints)
      {
        var enemyObject = new EnemyObject()
        {
          Position = point.transform.position,
          EnemyId = point.EnemyId,
        };
        spawnPoints.Add(enemyObject);
      }
      _levelData.EnemyObjects = spawnPoints.ToArray();
      
      EditorUtility.SetDirty(_levelData);
      
    }

    [Button, FoldoutGroup("Tools")]
    public void ClearLevel()
    {
      foreach (var go in _spawnedObjects.ToArray())
      {
        DestroyImmediate(go);
      }
      _spawnedObjects.Clear();
    }
    [Button, FoldoutGroup("Tools")]
    public void RefreshSpawnedObjects()
    {
      var rootGameObject = GameObject.Find("LevelRoot");
      var childObjects = rootGameObject.GetComponentsInChildren<Transform>();
      _spawnedObjects = new List<GameObject>();
      foreach (var childObject in childObjects)
      {
        if(childObject == rootGameObject.transform|| childObject.parent != rootGameObject.transform)continue;
        _spawnedObjects.Add(childObject.gameObject);
      }
    }
    [Button, FoldoutGroup("Tools")]
    public void RefreshObjectsPath()
    {
      foreach (var go in _spawnedObjects)
      {
        var path = GetGameObjectPath(go);
        if(path== null) continue;
      
        _pathDictionary[go] = path;
      }
    }

    [Button, FoldoutGroup("Tools")]
    public void RemoveLastCreated()
    {
      var go = _spawnedObjects.Last();
      _spawnedObjects.Remove(go);
      DestroyImmediate(go);
    }

    [Button, FoldoutGroup("Tools")]
    public void RemoveSelected()
    {
      var go = Selection.activeTransform.gameObject;
      if(go == gameObject)return;
      _spawnedObjects.Remove(go);
      DestroyImmediate(go);
    }

    [Button, FoldoutGroup("Tools")]
    public void InstantiateSpawnPoint()
    {
      var go = new GameObject("SpawnPoint");
      var spawnPoint = go.AddComponent<EnemySpawnPoint>();
      go.transform.position = transform.position;
      _enemySpawnPoints.Add(spawnPoint);
    }

    private void SelectEditorPrefab(EditorPrefab prefab)
    {
      _selectedPrefab = prefab;
      _editor = this;
    }

    private void InstantiatePrefab(GameObject prefab, string path)
    {
      var rootGameObject = GameObject.Find("LevelRoot");
      var go = Instantiate(prefab,transform.position,transform.rotation, rootGameObject.transform);
      _spawnedObjects.Add(go);
      _pathDictionary.Add(go, path);
    }

    private string GetGameObjectPath(GameObject go)
    {
      return Prefabs.Where(x => x.Prefab.name+"(Clone)" == go.name).Select(x => x.Path).FirstOrDefault();
    }

    #region KeyBindings

    [MenuItem("KeyBindings/TurnRight %&e")]
    public static void RotateRight()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.eulerAngles += new Vector3(0, 90, 0);
    }
  
    [MenuItem("KeyBindings/TurnLeft %&q")]
    public static void RotateLeft()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.eulerAngles += new Vector3(0, 90, 0);
    }
  
    [MenuItem("KeyBindings/Forward %&w")]
    public static void Forward()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.forward*2.5f;
    }
  
    [MenuItem("KeyBindings/Back %&s")]
    public static void Back()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.back*2.5f;
    }
  
    [MenuItem("KeyBindings/Left %&a")]
    public static void Left()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.left*2.5f;
    }
  
    [MenuItem("KeyBindings/Right %&d")]
    public static void Right()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.right*2.5f;
    }
  
    [MenuItem("KeyBindings/Down %&t")]
    public static void Down()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.down;
    }
  
    [MenuItem("KeyBindings/Up %&r")]
    public static void Up()
    {
      var go = Selection.activeTransform.gameObject;
      go.transform.position += Vector3.up;
    }
  
    [MenuItem("KeyBindings/CreateSelectedPrefab %&g")]
    public static void CreateSelectedPrefab()
    {
      _editor.InstantiatePrefab(_selectedPrefab.Prefab, _selectedPrefab.Path);
    }


    #endregion 


    public enum ObjectsTypeS
    {
      Flor,
      Wall,
    
    }
  }

  [Serializable]
  public class EditorPrefab
  {
    [HideInInspector]public GameObject Prefab;
    [TableColumnWidth(100)]
    [PreviewField(100,Alignment = ObjectFieldAlignment.Center)]
    public Texture Icon;
    public Action<GameObject, string> ButtonCreateAction;
    public Action<EditorPrefab> ButtonSelectAction;
    [HideInInspector] public string Path;

    public EditorPrefab(GameObject prefab,string path, Action<GameObject, string> createAction, Action<EditorPrefab> buttonSelectAction)
    {
      Prefab = prefab;
      ButtonCreateAction = createAction;
      ButtonSelectAction = buttonSelectAction;
      Path = path.Replace(".prefab", "").Replace("Assets/Resources/", "");
    }


    [OnInspectorGUI]
    private void CreateData()
    {
      Icon = AssetPreview.GetAssetPreview(Prefab);
    }

    [TableColumnWidth(100)]
    [Button("Create")]
    public void Create()
    {
      ButtonCreateAction?.Invoke(Prefab, Path);
    }
  
    [TableColumnWidth(100)]
    [Button("Select")]
    public void Select()
    {
      ButtonSelectAction?.Invoke(this);
    }
  }
#endif
}
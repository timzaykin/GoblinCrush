#if UNITY_EDITOR
using System;
using System.Collections.Generic;
using Common;
using Sirenix.OdinInspector;
using Sirenix.Utilities;
using UnityEngine;

namespace LevelEditor
{
  public class LevelMapGenerator : SerializedMonoBehaviour
  {
    [SerializeField] private Vector2Int _size;
    [SerializeField] private int[] _floorIds;
    [SerializeField] private int[] _wallsIds;

    [TableMatrix(HorizontalTitle = "Custom Cell Drawing", DrawElementMethod = "DrawColoredEnumElement",
      ResizableColumns = false, RowHeight = 20)]
    public bool[,] CustomCellDrawing;

    private static bool DrawColoredEnumElement(Rect rect, bool value)
    {
      if (Event.current.type == EventType.MouseDown && rect.Contains(Event.current.mousePosition))
      {
        value = !value;
        GUI.changed = true;
        Event.current.Use();
      }

      UnityEditor.EditorGUI.DrawRect(rect.Padding(1), value ? new Color(0.1f, 0.8f, 0.2f) : new Color(0, 0, 0, 0.5f));

      return value;
    }

    [Button]
    private void CreateData()
    {

      this.CustomCellDrawing = new bool[_size.x, _size.y];
    }

    public void SpawnMap(Action<GameObject, string> spawnAction, List<EditorPrefab> prefabs, Transform levelEditorTransform )
    {
      for (int y = 0; y < CustomCellDrawing.GetLength(0); y++)
      {
        for (int x = 0; x < CustomCellDrawing.GetLength(1); x++)
        {
          if (CustomCellDrawing[y, x])
          {
            levelEditorTransform.position = new Vector3(y * 5, 0, x * 5);
            levelEditorTransform.eulerAngles = new Vector3(0, 0, 0);
            var prefab = prefabs[_floorIds.GetRandom()];
            spawnAction?.Invoke(prefab.Prefab, prefab.Path);

            CheckWallCreating(x, y, spawnAction, prefabs, levelEditorTransform);

          }
        }
      }
    }

    private void CheckWallCreating(int x, int y, Action<GameObject, string> spawnAction, List<EditorPrefab> prefabs, Transform levelEditorTransform)
    {
      var west  = y-1 < 0 || !CustomCellDrawing[ y - 1, x];
      var east = y + 1 >= CustomCellDrawing.GetLength(0) || !CustomCellDrawing[y+1,x];
      var south = x-1<0||!CustomCellDrawing[ y,x-1];
      var north = x+1 >= CustomCellDrawing.GetLength(1) || !CustomCellDrawing[y, x + 1];

      if (south)
      {
        levelEditorTransform.position = new Vector3(y * 5f+5f, 0, x * 5f-5);
        levelEditorTransform.eulerAngles = new Vector3(0, 0, 0);
        var prefab = prefabs[_wallsIds.GetRandom()];
        spawnAction?.Invoke(prefab.Prefab, prefab.Path);
      }
      
      if (north)
      {
        levelEditorTransform.position = new Vector3(y * 5f, 0, x * 5f );
        levelEditorTransform.eulerAngles = new Vector3(0, 180, 0);
        var prefab = prefabs[_wallsIds.GetRandom()];
        spawnAction?.Invoke(prefab.Prefab, prefab.Path);
      }
      
      if (east)
      {
        levelEditorTransform.position = new Vector3(y * 5f+5, 0, x * 5f );
        levelEditorTransform.eulerAngles = new Vector3(0, -90, 0);
        var prefab = prefabs[_wallsIds.GetRandom()];
        spawnAction?.Invoke(prefab.Prefab, prefab.Path);
      }

      if (west)
      {
        levelEditorTransform.position = new Vector3(y * 5f, 0, x * 5f-5f );
        levelEditorTransform.eulerAngles = new Vector3(0, 90, 0);
        var prefab = prefabs[_wallsIds.GetRandom()];
        spawnAction?.Invoke(prefab.Prefab, prefab.Path);
      }

    }
  }
  
  
}
#endif
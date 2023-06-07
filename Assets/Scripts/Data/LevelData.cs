using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Data
{
 
  [CreateAssetMenu(menuName = "Config/LevelData", fileName = "LevelData", order = 1)]
  public class LevelData : SerializedScriptableObject
  {
    public string LevelName;
    public string NextLevelName;
    public string PlayerPrefabPath;
    public Vector3Data StartPosition;
    public LevelObject[] LevelObjects;
    public EnemyObject[] EnemyObjects;
    public LevelObject LevelEnterObject;
  }
  
  public struct LevelObject
  {
    public Vector3 Position;
    public Quaternion Rotation;
    public string PrefabPath;
  }

  public struct EnemyObject
  {
    public Vector3 Position;
    public string EnemyId;
  }
}
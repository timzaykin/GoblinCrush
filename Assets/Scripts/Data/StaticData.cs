using System.Linq;
using UnityEngine;
using UnityEngine.Serialization;

namespace Data
{
  [CreateAssetMenu(menuName = "Config/StaticData", fileName = "StaticData", order = 0)]
  public class StaticData : ScriptableObject
  {
    public Vector3 CameraOffset;
    public float ClampVelocity = 0.2f;
    public Vector3 GlobalGravitation;
    public Vector3 PlayerAddForce;
    public LevelData[] Levels;
    public EnemyData[] Enemies;
    public float SpawnTimer;

    public LevelData GetLevelByName(string levelName)
    {
      return Levels.FirstOrDefault(x => x.LevelName == levelName);
    }

    public EnemyData GetEnemyById(string enemyId)
    {
      return Enemies.FirstOrDefault(x => x.EnemyId == enemyId);
    }
  }
}
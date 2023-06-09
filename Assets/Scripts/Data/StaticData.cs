using System.Linq;
using Common;
using UnityEngine;
using UnityEngine.Serialization;

namespace Data
{
  [CreateAssetMenu(menuName = "Config/StaticData", fileName = "StaticData", order = 0)]
  public class StaticData : ScriptableObject
  {
    public Vector3 CameraOffset;
    public LevelData[] Levels;
    public EnemyData[] Enemies;
    public string[] RandomHitVfxData;

    public LevelData GetLevelByName(string levelName)
    {
      return Levels.FirstOrDefault(x => x.LevelName == levelName);
    }

    public EnemyData GetEnemyById(string enemyId)
    {
      return Enemies.FirstOrDefault(x => x.EnemyId == enemyId);
    }

    public string GetRandomHitVfx()
    {
      return RandomHitVfxData.GetRandom();
    }
  }
}
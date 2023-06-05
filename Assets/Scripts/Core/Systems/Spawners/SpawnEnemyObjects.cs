using Core.Components.Common;
using Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.Spawners
{
  public class SpawnEnemyObjects : IEcsInitSystem
  {
    private StaticData _staticData;
    private LevelData _levelData;
    private readonly EcsWorld _world = null;
    
    public void Init()
    {
      foreach (var enemyObject in _levelData.EnemyObjects)
      {
        var enemyData = _staticData.GetEnemyById(enemyObject.EnemyId);
        _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
        {
          PrefabPath = enemyData.PrefabPath,
          Position = enemyObject.Position,
          Rotation = Quaternion.identity,
          Parent = null
        };
      }
    }
  }
}
using Core.Components.Common;
using Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.Spawners
{
  public class SpawnSceneObjects : IEcsInitSystem
  {
    private StaticData _staticData;
    private readonly EcsWorld _world = null;

    public void Init()
    {
      foreach (var position in _staticData.SceneObjectPositions)
        _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
        {
          PrefabPath = _staticData.SceneObjectPrefab,
          Position = position,
          Rotation = Quaternion.identity,
          Parent = null
        };
    }
  }
}
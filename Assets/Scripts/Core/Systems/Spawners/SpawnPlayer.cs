using Core.Components.Common;
using Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.Spawners
{
  public class SpawnPlayer : IEcsInitSystem
  {
    private LevelData _levelData;
    private readonly EcsWorld _world = null;

    public void Init()
    {
      _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
      {
        PrefabPath = _levelData.PlayerPrefabPath,
        Position = _levelData.StartPosition.AsUnityVector(),
        Rotation = Quaternion.identity,
        Parent = null
      };
    }
  }
}
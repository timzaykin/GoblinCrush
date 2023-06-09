using Core.Components.Common;
using Core.UnityComponents.Factories;
using Data;
using Infrastructure.Factory;
using Leopotam.Ecs;

namespace Core.Systems.Spawners
{
  public class SpawnVfxSystem : IEcsPreInitSystem, IEcsRunSystem
  {
    private PrefabFactory _factory;
    private IGameFactory _gameFactory;
    private SceneData _sceneData;
    private StaticData _staticData;

    private readonly EcsFilter<SpawnVfx> _spawnFilter = null;
    private EcsWorld _world;

    public void PreInit()
    {
      _factory = _sceneData.Factory;
    }
    
    public void Run()
    {
      if (_spawnFilter.IsEmpty()) return;

      foreach (var index in _spawnFilter)
      {
        ref var spawnEntity = ref _spawnFilter.GetEntity(index);
        var spawnPrefabData = spawnEntity.Get<SpawnVfx>();
        if (spawnPrefabData.PrefabPath == null) spawnPrefabData.PrefabPath = _staticData.GetRandomHitVfx();
          _factory.Spawn(new SpawnPrefab()
          {
            PrefabPath = spawnPrefabData.PrefabPath,
            Position = spawnPrefabData.Position,
            Rotation = spawnPrefabData.Rotation,
          });
        spawnEntity.Del<SpawnVfx>();
      }
    }
  }
}
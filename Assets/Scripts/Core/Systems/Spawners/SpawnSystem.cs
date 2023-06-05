using Core.Components.Common;
using Core.UnityComponents.Factories;
using Data;
using Infrastructure.Factory;
using Leopotam.Ecs;
using UnityEngine;


namespace Core.Systems.Spawners
{
  public class SpawnSystem : IEcsPreInitSystem, IEcsInitSystem, IEcsRunSystem
  {
    private PrefabFactory _factory;
    private IGameFactory _gameFactory;
    private SceneData _sceneData;

    private readonly EcsFilter<SpawnPrefab> _spawnFilter = null;
    private EcsWorld _world;

    public void PreInit()
    {
      _factory = _sceneData.Factory;
      _factory.Initialize(_world, _gameFactory);
    }

    public void Init()
    {
      if (_spawnFilter.IsEmpty()) return;

      foreach (var index in _spawnFilter)
      {
        ref var spawnEntity = ref _spawnFilter.GetEntity(index);
        var spawnPrefabData = spawnEntity.Get<SpawnPrefab>();
        _factory.Spawn(spawnPrefabData);
        spawnEntity.Del<SpawnPrefab>();
      }
      Object.FindObjectOfType<NavMeshSurfaceUpdater>().UpdateNavMesh();
    }

    public void Run()
    {
      if (_spawnFilter.IsEmpty()) return;

      foreach (var index in _spawnFilter)
      {
        ref var spawnEntity = ref _spawnFilter.GetEntity(index);
        var spawnPrefabData = spawnEntity.Get<SpawnPrefab>();
        _factory.Spawn(spawnPrefabData);
        spawnEntity.Del<SpawnPrefab>();
      }
    }
  }
}
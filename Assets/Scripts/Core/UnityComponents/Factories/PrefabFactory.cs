using System.Collections.Generic;
using Core.Components.Common;
using Core.Components.Common.MonoLinks;
using Core.UnityComponents.MonoLinks.Base;
using Infrastructure.Factory;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.Factories
{
  public class PrefabFactory : MonoBehaviour
  {
    private IGameFactory _gameFactory;
    private List<GameObject> _spawnedGameObjects;
    private EcsWorld _world;

    public void Initialize(EcsWorld world, IGameFactory gameFactory)
    {
      _world = world;
      _gameFactory = gameFactory;
      _spawnedGameObjects = new List<GameObject>();
    }

    public void Spawn(SpawnPrefab spawnData)
    {
      var gameObject =
        _gameFactory.CreateObject(spawnData.PrefabPath, spawnData.Position, spawnData.Rotation, spawnData.Parent);
      var monoEntities = gameObject.GetComponentsInChildren<MonoEntity>();
      foreach (var monoEntity in monoEntities)
      {
        var ecsEntity = _world.NewEntity();
        monoEntity.Make(ref ecsEntity);
      }
      _spawnedGameObjects.Add(gameObject);
      spawnData.OnComplete?.Invoke(monoEntities[0]);
    }

    public void CleanUp()
    {
      foreach (var gameObject in _spawnedGameObjects.ToArray())
      {
        Destroy(gameObject);
      }
      _spawnedGameObjects.Clear();
    }

    public void Free(EcsEntity entity)
    {
      var go = entity.Get<GameObjectLink>().Value;
      _spawnedGameObjects.Remove(go);
      Destroy(go);
      entity.Destroy();

    }
  }
}
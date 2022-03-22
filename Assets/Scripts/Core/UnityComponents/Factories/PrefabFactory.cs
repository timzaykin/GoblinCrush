using Core.Components.Common;
using Core.UnityComponents.MonoLinks.Base;
using Infrastructure.Factory;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.Factories
{
  public class PrefabFactory : MonoBehaviour
  {
    private IGameFactory _gameFactory;
    //TODO: Отрефакторить этот класс, убрать MonoBeh и добавить в DI

    private EcsWorld _world;

    public void Initialize(EcsWorld world, IGameFactory gameFactory)
    {
      _world = world;
      _gameFactory = gameFactory;
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
    }
  }
}
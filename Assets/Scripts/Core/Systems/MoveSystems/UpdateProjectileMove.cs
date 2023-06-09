using Core.Components.Battle;
using Core.Components.Common.MonoLinks;
using Core.Components.Events;
using Core.UnityComponents.Factories;
using Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.MoveSystems
{
  public class UpdateProjectileMove : IEcsRunSystem, IEcsPreInitSystem
  {
    private PrefabFactory _factory;
    private SceneData _sceneData = null;
    
    private readonly EcsFilter<Projectile> _filter = null;

    public void PreInit()
    {
      _factory = _sceneData.Factory;
    }

    public void Run()
    {
      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        ref var data = ref _filter.Get1(index);
        var transform = entity.Get<GameObjectLink>().Value.transform;
        transform.position +=  transform.forward*data.ProjectileSpeed;
        if (data.LiveTime >= 1)
        {
          _factory.Free(entity);
        }
        data.LiveTime += Time.deltaTime*data.ProjectileSpeed;
      }
    }

    
  }
}
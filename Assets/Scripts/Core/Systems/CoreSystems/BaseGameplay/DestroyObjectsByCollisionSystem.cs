using Core.Components.Core;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class DestroyObjectsByCollisionSystem : IEcsRunSystem
  {
    private readonly EcsFilter<OnDestructibleCollisionEvent> _filter = null;
    private EcsWorld _world = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var destructible = ref _filter.Get1(index);
        Object.Destroy(destructible.ObstacleObject, 0.5f);
      }
    }
  }
}
using Core.Components.Core;
using Core.Components.Events;
using Core.Components.GameStates.GameplayEvents;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class HandlePlayerDamageSystem : IEcsRunSystem
  {
    private readonly EcsFilter<PlayerHealth, DamageEvent> _filter = null;
    
    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        ref var health =ref _filter.Get1(index);
        health.Count -= 1;
        Debug.Log("Current health: "+health.Count);
        entity.Del<DamageEvent>();
        if (health.Count <= 0)
        {
          entity.Get<DeadEvent>();
          Debug.Log("Player death");
        }
      }
    }
  }
}
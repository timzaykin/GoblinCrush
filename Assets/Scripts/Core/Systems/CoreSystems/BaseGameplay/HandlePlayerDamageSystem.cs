using Core.Components.Core;
using Core.Components.Events;
using Core.Components.GameStates.GameplayEvents;
using Core.UnityComponents.UI;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class HandlePlayerDamageSystem : IEcsRunSystem
  {
    private readonly GameHUD _gameHUD;
    private readonly EcsFilter<PlayerHealth, DamageEvent> _filter = null;
    
    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        ref var health =ref _filter.Get1(index);
        health.Count -= 1;
        entity.Del<DamageEvent>();
        if (health.Count <= 0)
        {
          entity.Get<DeadEvent>();
          _gameHUD.HealthBar.SetHealthPointsCount(0);
          continue;
        }
        _gameHUD.HealthBar.SetHealthPointsCount(health.Count);
      }
    }
  }
}
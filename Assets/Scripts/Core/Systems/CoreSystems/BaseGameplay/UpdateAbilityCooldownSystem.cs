using Core.Components.Battle;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class UpdateAbilityCooldownSystem : IEcsRunSystem
  {
    private EcsFilter<AttackAbility> _filter = null;
    
    public void Run()
    {
      if (!_filter.IsEmpty())
      {
        foreach (var index in _filter)
        {
          ref var attackAbility =ref _filter.Get1(index);
          attackAbility.LastAttackTime += Time.deltaTime;
        }
      }
    }
  }
} 
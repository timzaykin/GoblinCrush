using Core.Components.Battle;
using Core.Components.Common.MonoLinks;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class HandleEnemyTriggerCollisionSystem : IEcsRunSystem
  {
    private EcsFilter<EnemyTag, OnEnemyTriggerEnter> _filter = null;

    public void Run()
    {
      if (!_filter.IsEmpty())
      {
        foreach (var index in _filter)
        {
          ref var entity = ref _filter.GetEntity(index);
          ref var collision = ref _filter.Get2(index);
          entity.Get<EnemyViewLink>().Value.EnemyAnimator.SetCombat(true);

          entity.Get<AttackTarget>() = new AttackTarget()
          {
            Target = collision.Other,
          };
        }
      }
    }
  }
}
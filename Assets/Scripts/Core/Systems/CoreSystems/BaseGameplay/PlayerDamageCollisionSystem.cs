using Core.Components.Events;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class PlayerDamageCollisionSystem : IEcsRunSystem
  {
    private readonly EcsFilter<WeaponTag, PlayerDamageTriggerEvent>.Exclude<DamageEvent> _filter = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var onCollisionEnterEvent = entity.Get<PlayerDamageTriggerEvent>();
        var collisionGameObject = onCollisionEnterEvent.Collision.gameObject;
        entity.Del<PlayerDamageTriggerEvent>();
        var playerEntity = collisionGameObject.GetComponentInParent<MonoEntity>();
        if (playerEntity == null || !playerEntity.Entity.Has<PlayerTag>())
          continue;
        playerEntity.Entity.Get<DamageEvent>();
      }
    }
  }
}
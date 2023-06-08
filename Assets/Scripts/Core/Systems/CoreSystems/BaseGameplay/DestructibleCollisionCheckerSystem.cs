using Core.Components.Common.MonoLinks;
using Core.Components.Core;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class DestructibleCollisionCheckerSystem : IEcsRunSystem
  {
    private readonly EcsFilter<WeaponTag, OnWeaponTriggerEvent> _filter = null;
    private readonly EcsWorld _world = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var onCollisionEnterEvent = entity.Get<OnWeaponTriggerEvent>();

        var collisionGameObject = onCollisionEnterEvent.Collision.gameObject;
        if(collisionGameObject == null) continue;
        var destructible = collisionGameObject.GetComponentInParent<MonoEntity>();
        if (destructible == null || !destructible.Entity.Has<DestructibleTag>())
          continue;
        var weaponTransform = entity.Get<GameObjectLink>().Value.transform;
        destructible.Entity.Get<DestructibleTag>().Behavoiur.Destruct(_world, destructible.Entity, weaponTransform.position);
      }
    }
  }
}
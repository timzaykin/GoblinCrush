using Core.Components.Core;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class DestructibleCollisionCheckerSystem : IEcsRunSystem
  {
    private readonly EcsFilter<WeaponTag, OnCollisionEnterEvent> _filter = null;
    private readonly EcsWorld _world = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var onCollisionEnterEvent = entity.Get<OnCollisionEnterEvent>();

        var collisionGameObject = onCollisionEnterEvent.Collision.gameObject;
        var destructible = collisionGameObject.GetComponent<DestructibleTagMonoLink>();
        if (destructible == null)
          continue;

        var DistructableCollision = _world.NewEntity();
        ref var objectToDistuction = ref DistructableCollision.Get<OnDestructibleCollisionEvent>();
        objectToDistuction.ObstacleObject = onCollisionEnterEvent.Collision.gameObject;
      }
    }
  }
}
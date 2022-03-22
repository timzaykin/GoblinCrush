using Core.Components.Core;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class ObstacleTriggerEnterCheckerSystem : IEcsRunSystem
  {
    private readonly EcsFilter<PlayerTag, OnTriggerEnterEvent> _filter = null;
    private EcsWorld _world = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var onCollisionEnterEvent = entity.Get<OnTriggerEnterEvent>();

        var collisionGameObject = onCollisionEnterEvent.Collider.gameObject;
        var obstacle = collisionGameObject.GetComponent<DestructibleTagMonoLink>();
        if (obstacle == null)
          continue;

        entity.Get<OnObstacleExit>() = new OnObstacleExit
        {
          Score = obstacle.Value.Score
        };
      }
    }
  }
}
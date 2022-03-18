using Core.Components.Core;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
	public class ObstacleTriggerEnterCheckerSystem : IEcsRunSystem
	{
		private EcsWorld _world = null;
		private EcsFilter<PlayerTag, OnTriggerEnterEvent> _filter = null;
		
		public void Run()
		{
			if (_filter.IsEmpty())
			{
				return;
			}

			foreach (int index in _filter)
			{
				ref EcsEntity entity = ref _filter.GetEntity(index);
				var onCollisionEnterEvent = entity.Get<OnTriggerEnterEvent>();
				
				GameObject collisionGameObject = onCollisionEnterEvent.Collider.gameObject;
				var obstacle = collisionGameObject.GetComponent<DestructibleTagMonoLink>();
				if (obstacle == null) 
					continue;
				
				entity.Get<OnObstacleExit>() = new OnObstacleExit
				{
					Score = obstacle.Value.Score,
				};
			}
		}
	}
}
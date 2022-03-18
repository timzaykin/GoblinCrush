using Core.Components.Core;
using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
	public class DestructibleCollisionCheckerSystem : IEcsRunSystem
	{
		private EcsWorld _world = null;
		private EcsFilter<WeaponTag, OnCollisionEnterEvent> _filter = null;
		
		public void Run()
		{
			if (_filter.IsEmpty())
			{
				return;
			}

			foreach (int index in _filter)
			{
				ref EcsEntity entity = ref _filter.GetEntity(index);
				var onCollisionEnterEvent = entity.Get<OnCollisionEnterEvent>();
				
				GameObject collisionGameObject = onCollisionEnterEvent.Collision.gameObject;
				var destructible = collisionGameObject.GetComponent<DestructibleTagMonoLink>();
				if (destructible == null) 
					continue;
				
				EcsEntity DistructableCollision = _world.NewEntity();
				ref var objectToDistuction = ref DistructableCollision.Get<OnDestructibleCollisionEvent>();
				objectToDistuction.ObstacleObject = onCollisionEnterEvent.Collision.gameObject;
			}
		}
	}
}
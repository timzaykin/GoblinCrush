using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
	public class OnCollisionEnterMonoLink : PhysicsLinkBase
	{
		public void OnCollisionEnter(Collision other)
		{
			_entity.Get<OnCollisionEnterEvent>() = new OnCollisionEnterEvent
			{
				Collision = other,
				Sender = gameObject
			};
		}
	}
}
using UnityEngine;

namespace Core.Components.PhysicsEvents
{
	public struct OnTriggerEnterEvent
	{
		public GameObject Sender;
		public Collider Collider;
	}
}
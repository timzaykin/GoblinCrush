using UnityEngine;

namespace Core.Components.PhysicsEvents
{
  public struct PlayerDamageTriggerEvent
  {
    public GameObject Sender;
    public Collider Collision;
  }
}
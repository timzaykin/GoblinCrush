using UnityEngine;

namespace Core.Components.PhysicsEvents
{
  public struct OnWeaponTriggerEvent
  {
    public GameObject Sender;
    public Collider Collision;
  }
}
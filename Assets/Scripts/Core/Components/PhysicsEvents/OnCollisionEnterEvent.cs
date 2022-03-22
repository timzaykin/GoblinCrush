using UnityEngine;

namespace Core.Components.PhysicsEvents
{
  public struct OnCollisionEnterEvent
  {
    public GameObject Sender;
    public Collision Collision;
  }
}
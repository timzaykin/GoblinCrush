using Core.UnityComponents.MonoLinks.Base;
using UnityEngine;

namespace Core.Components.PhysicsEvents
{
  public struct OnCollisionEnterEvent
  {
    public GameObject Sender;
    public Collision Collision;
  }

  public struct OnEnemyTriggerEnter
  {
    public MonoEntity Other;
  }

}
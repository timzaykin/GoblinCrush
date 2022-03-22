using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class OnTriggerEnterMonoLink : PhysicsLinkBase
  {
    private void OnTriggerEnter(Collider other)
    {
      _entity.Get<OnTriggerEnterEvent>() = new OnTriggerEnterEvent
      {
        Collider = other,
        Sender = gameObject
      };
    }
  }
}
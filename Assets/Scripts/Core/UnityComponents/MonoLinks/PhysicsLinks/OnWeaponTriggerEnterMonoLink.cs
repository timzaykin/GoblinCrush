using System;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class OnWeaponTriggerEnterMonoLink : PhysicsLinkBase
  {
    public void OnTriggerEnter(Collider other)
    {
      _entity.Get<OnWeaponTriggerEvent>() = new OnWeaponTriggerEvent
      {
        Collision = other,
        Sender = gameObject
      };
    }
  }
}
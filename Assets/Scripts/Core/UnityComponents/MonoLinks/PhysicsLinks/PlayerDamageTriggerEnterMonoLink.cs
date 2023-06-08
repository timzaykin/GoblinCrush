using System;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class PlayerDamageTriggerEnterMonoLink : PhysicsLinkBase
  {
    public void OnTriggerEnter(Collider other)
    {
      _entity.Get<PlayerDamageTriggerEvent>() = new PlayerDamageTriggerEvent
      {
        Collision = other,
        Sender = gameObject
      };
    }
  }
}
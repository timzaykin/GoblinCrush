using System;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;
using View.Hero;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class PlayerDamageTriggerEnterMonoLink : PhysicsLinkBase
  {
    public void OnTriggerEnter(Collider other)
    {
      if(other == null || other.GetComponent<HeroAnimator>() == null)return;
      _entity.Get<PlayerDamageTriggerEvent>() = new PlayerDamageTriggerEvent
      {
        Collision = other,
        Sender = gameObject
      };
    }
  }
}
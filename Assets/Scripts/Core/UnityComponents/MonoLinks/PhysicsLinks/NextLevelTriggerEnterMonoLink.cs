using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class NextLevelTriggerEnterMonoLink : PhysicsLinkBase
  {
    public void OnTriggerEnter(Collider other)
    {
      var otherEntity = other.gameObject.GetComponent<MonoEntity>();
      if (otherEntity == null || !otherEntity.Entity.Has<PlayerTag>()) return;

      otherEntity.Entity.Get<ChangeLevelTriggerEvent>();
    }
  }
}
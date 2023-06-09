using Core.Components.Objects.Tags;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class OnEnemyTriggerEnterMonoLink : PhysicsLinkBase
  {
  
    public void OnTriggerEnter(Collider other)
    {
      var entity = other.GetComponent<MonoEntity>();
      if(entity == null ||!entity.Entity.IsAlive() || !entity.Entity.Has<PlayerTag>())return;
      _entity.Get<OnEnemyTriggerEnter>() = new OnEnemyTriggerEnter
      {
        Other = entity
      };
    }
  }
}
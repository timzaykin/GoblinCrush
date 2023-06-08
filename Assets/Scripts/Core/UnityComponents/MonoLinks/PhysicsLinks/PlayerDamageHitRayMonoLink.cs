using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class PlayerDamageHitRayMonoLink : PhysicsLinkBase
  {

    [SerializeField]private LayerMask _layerMask;
    public void FixedUpdate()
    {
      RaycastHit hit;
      if (Physics.Raycast(transform.position, transform.forward , out hit, 0.4f, _layerMask))
      {
        if(hit.collider == null)return;
        _entity.Get<PlayerDamageTriggerEvent>() = new PlayerDamageTriggerEvent
        {
          Collision = hit.collider,
          Sender = gameObject
        };
        enabled = false;
      }
    }
  }
}
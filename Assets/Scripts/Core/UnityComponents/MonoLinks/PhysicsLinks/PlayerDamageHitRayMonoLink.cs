using Core.Components.Common;
using Core.Components.PhysicsEvents;
using Core.UnityComponents.MonoLinks.Base;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.PhysicsLinks
{
  public class PlayerDamageHitRayMonoLink : PhysicsLinkBase
  {

    [SerializeField]private LayerMask _layerMask;
    [SerializeField] private string _hitVfxPrefab;
    [SerializeField] private string OnHitSount = "Shmak";
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
        AllServices.Container.Single<IAudioService>().GetSoundSystem().PlayEffectClip(OnHitSount, true);
        _entity.Get<SpawnVfx>() = new SpawnVfx()
        {
          PrefabPath = _hitVfxPrefab,
          Position = hit.point,
          Rotation = Quaternion.identity
        };
        gameObject.SetActive(false);
      }
    }
  }
}
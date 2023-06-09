using System;
using System.Collections;
using Core.Components.Common;
using Core.Components.Common.MonoLinks;
using Leopotam.Ecs;
using UnityEngine;
using UnityEngine.Serialization;

namespace Core.UnityComponents.DestructibleBehaviours
{
  public class EnemyDestructibleBehaviour : DestructibleBehaviourBase
  {
    [SerializeField] private string _ragdollPrefab;
    [SerializeField] private Transform _ragdollSpawnPosition;
    
    public override void Destruct(EcsWorld world, EcsEntity entity, Vector3 weaponTransform)
    {
      entity.Destroy();
      world.NewEntity().Get<SpawnVfx>() = new SpawnVfx()
      {
        Position = _ragdollSpawnPosition.position+Vector3.up,
        Rotation = Quaternion.identity
      };

      world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
      {
        PrefabPath = _ragdollPrefab,
        Position = _ragdollSpawnPosition.position,
        Rotation = _ragdollSpawnPosition.rotation,
        Parent = null,
        OnComplete = monoEntity =>
        {
          var rb = monoEntity.Entity.Get<RigidbodyLink>();
          rb.Value.AddExplosionForce(1000f,weaponTransform,10f);
        }
      };
      Destroy(gameObject);
    }
  }
}
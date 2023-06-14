using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.DestructibleBehaviours
{
  public class DestructibleDoorBehaviour : DestructibleBehaviourBase
  {
    [SerializeField] private Rigidbody _rigidbody;
    
    public override void Destruct(EcsWorld world, EcsEntity entity, Vector3 weaponPosition)
    {
      _rigidbody.constraints = RigidbodyConstraints.None;
      _rigidbody.AddForceAtPosition((weaponPosition - transform.position).normalized * 100f, weaponPosition);
    }
  }
}
using Infrastructure;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.DestructibleBehaviours
{
  public abstract class DestructibleBehaviourBase : MonoBehaviour
  {
    public abstract void Destruct(EcsWorld world,EcsEntity entity,Vector3 weaponPosition);
  }
}


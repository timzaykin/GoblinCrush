using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks.Base
{
  [RequireComponent(typeof(MonoEntity))]
  public abstract class MonoLinkBase : MonoBehaviour
  {
    public abstract void Make(ref EcsEntity entity);
  }
}
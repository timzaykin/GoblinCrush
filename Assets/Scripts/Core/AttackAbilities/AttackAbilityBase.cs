using Core.Components.Battle;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.AttackAbilities
{
  public abstract class AttackAbilityBase : MonoBehaviour
  {
    public abstract void DoAttack(Transform targetTransform,ref EcsWorld world);
  }
}

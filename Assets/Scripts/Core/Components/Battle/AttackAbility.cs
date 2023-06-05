using System;
using Core.AttackAbilities;

namespace Core.Components.Battle
{
  [Serializable]
  public struct AttackAbility
  {
    public float AttackCooldown;
    public float AttackRange;
    public float LastAttackTime;
    public AttackAbilityBase Ability;
  }
}
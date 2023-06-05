using Core.AttackAbilities;
using Core.Components.Battle;
using Core.UnityComponents.MonoLinks.Base;
using UnityEngine;

namespace View.Enemy
{
  public class EnemyView : MonoBehaviour
  {
    [SerializeField] private EnemyAnimator _enemyAnimator;
    [SerializeField] private AttackAbilityBase _attackAbility;

    public EnemyAnimator EnemyAnimator => _enemyAnimator;
  }
}

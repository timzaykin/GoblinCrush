using System.Collections;
using Core.Components.Events;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;
using View.Enemy;

namespace Core.AttackAbilities
{
  public class SpearmanAttack : AttackAbilityBase
  {
    private const float AttackPrepareTime = 1.1f;
    private const float AttackTime = 0.75f;
    [SerializeField] private MonoEntity _entity;
    [SerializeField] private Rigidbody _rigidbody; 
    [SerializeField] private GameObject _weaponCollision;
    [SerializeField] private EnemyView _view;
    public override void DoAttack()
    {
      StartCoroutine(nameof(AttackCoroutine));
    }

    private IEnumerator AttackCoroutine()
    {
      _view.EnemyAnimator.PlayAttack();
      yield return new WaitForSeconds(AttackPrepareTime);
      _weaponCollision.SetActive(true);
      for (int i = 0; i < 30; i++)
      {
        yield return new WaitForSeconds(AttackTime/30);
        transform.position += transform.forward.normalized/3;
      }
      _entity.Entity.Del<AttackEvent>();
      _weaponCollision.SetActive(false);
      _rigidbody.velocity = Vector3.zero;
    }
  }
}
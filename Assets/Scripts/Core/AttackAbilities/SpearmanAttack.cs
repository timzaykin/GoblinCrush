using System;
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

    public void Start()
    {
      _weaponCollision.SetActive(false);
    }

    public override void DoAttack()
    {
      StartCoroutine(nameof(AttackCoroutine));
    }

    private IEnumerator AttackCoroutine()
    {
      _view.EnemyAnimator.PlayAttack();
      yield return new WaitForSeconds(AttackPrepareTime);
      _weaponCollision.SetActive(true);
      _view.EnemyAnimator.SetDash(true);
      _rigidbody.velocity += transform.forward.normalized * 10;
      yield return new WaitForSeconds(AttackTime);
      _weaponCollision.SetActive(false);
      _view.EnemyAnimator.SetDash(false);
      _rigidbody.velocity = Vector3.zero;
      yield return new WaitForSeconds(0.5f);
      _entity.Entity.Del<AttackEvent>();
    }
  }
}
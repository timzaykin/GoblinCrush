using System.Collections;
using Core.Components.Events;
using Core.UnityComponents.MonoLinks.Base;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using Leopotam.Ecs;
using UnityEngine;
using UnityEngine.AI;
using View.Enemy;

namespace Core.AttackAbilities
{
  public class SpearmanAttack : AttackAbilityBase
  {
    [SerializeField] private float AttackPrepareTime = 1.1f;
    [SerializeField] private float AttackTime = 0.75f;
    [SerializeField] private MonoEntity _entity;
    [SerializeField] private NavMeshAgent _navMesh; 
    [SerializeField] private GameObject _weaponCollision;
    [SerializeField] private EnemyView _view;

    public void Start()
    {
      _weaponCollision.SetActive(false);
    }

    public override void DoAttack(Transform targetTransform,ref EcsWorld world)
    {
      StartCoroutine(AttackCoroutine(targetTransform));
    }

    private IEnumerator AttackCoroutine(Transform targetTransform)
    {
      _view.EnemyAnimator.PlayAttack();
      yield return new WaitForSeconds(AttackPrepareTime);
      _weaponCollision.SetActive(true);
      AllServices.Container.Single<IAudioService>().GetSoundSystem().PlayEffectClip("Attack", true);
      var dashPoint = targetTransform.position +((targetTransform.position - transform.position).normalized*3);
      _navMesh.SetDestination(dashPoint);
      _navMesh.speed = 15f;
      yield return new WaitForSeconds(AttackTime);
      _weaponCollision.SetActive(false);
      _navMesh.speed = 0;
      yield return new WaitForSeconds(0.5f);
      _entity.Entity.Del<AttackEvent>();
    }
  }
}
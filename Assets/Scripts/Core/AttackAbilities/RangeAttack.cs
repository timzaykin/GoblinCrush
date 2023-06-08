using System.Collections;
using Core.Components.Battle;
using Core.Components.Common;
using Core.Components.Events;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;
using UnityEngine.Serialization;
using View.Enemy;

namespace Core.AttackAbilities
{
  public class RangeAttack: AttackAbilityBase
  {
    private const float AttackPrepareTime = 0.4f;
    private const float AttackTime = 1.1f;
    [SerializeField] private MonoEntity _entity;
    [SerializeField] private Transform _projectilePoint;
    [SerializeField] private string _projectilePrefabPath;
    [SerializeField] private EnemyView _view;
    [SerializeField] private float _projectileSpeed;

    public override void DoAttack(Transform targetTransform,ref EcsWorld world)
    {
      StartCoroutine(AttackCoroutine(targetTransform,world));
    }
    
    private IEnumerator AttackCoroutine(Transform targetTransform, EcsWorld world)
    {
      var lookAt = targetTransform.position;
      lookAt.y = 0;
      transform.LookAt(lookAt);
      _view.EnemyAnimator.PlayAttack();
      yield return new WaitForSeconds(AttackPrepareTime);
      world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab()
      {
        PrefabPath = _projectilePrefabPath,
        Position = _projectilePoint.position,
        Rotation = _projectilePoint.rotation,
        
        OnComplete = entity =>
        {
          entity.Entity.Get<Projectile>() = new Projectile()
          {
            ProjectileSpeed = _projectileSpeed,
          };
        }
      };
      yield return new WaitForSeconds(AttackTime);
      _entity.Entity.Del<AttackEvent>();
    }
  }
}
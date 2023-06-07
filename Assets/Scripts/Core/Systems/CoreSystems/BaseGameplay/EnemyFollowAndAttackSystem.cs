using Core.Components.Battle;
using Core.Components.Common.MonoLinks;
using Core.Components.Events;
using Core.Components.Objects;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;
using View.Enemy;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class EnemyFollowAndAttackSystem : IEcsRunSystem
  {
    private EcsFilter<AttackTarget, AttackAbility>.Exclude<AttackEvent> _filter;

    public void Run()
    {
      if(_filter.IsEmpty())return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var currentGo = entity.Get<GameObjectLink>().Value;
        var view = entity.Get<EnemyViewLink>().Value;
        ref var targetEntity = ref _filter.Get1(index).Target;
        ref var attackAbility = ref _filter.Get2(index);
        var currentTransform = currentGo.transform;
        ref var navMesh = ref entity.Get<NavMeshLink>();
        
        if (Vector3.Distance(currentTransform.position, targetEntity.gameObject.transform.position) > attackAbility.AttackRange)
        {
          MoveToTarget(ref targetEntity,ref navMesh, currentTransform, attackAbility, view);
        }
        else
        {
          SetAttackEvent(ref targetEntity, ref navMesh, currentTransform,ref attackAbility,view, entity);
        }
        
      }
    }
    
    private void MoveToTarget(ref MonoEntity currentTarget,ref NavMeshLink navMesh, Transform currentTransform,
      AttackAbility attackAbility, EnemyView view)
    {
      var position = currentTarget.transform.position;
      navMesh.Value.SetDestination(position);
      navMesh.Value.speed = navMesh.UnitSpeed;
      SetToTargetDirection(currentTarget.transform, currentTransform);
      view.EnemyAnimator.PlayWalk(true);

      
    }
    
    private static void SetToTargetDirection(Transform currentTarget, Transform currentTransform)
    {
      var position = currentTarget.position;
      var direction = (position - currentTransform.transform.position).normalized;
      direction.y = 0f;
      currentTransform.forward = direction;
    }
    
    private void SetAttackEvent(ref MonoEntity currentTarget,ref NavMeshLink navMesh, Transform currentTransform,ref AttackAbility attackAbility, EnemyView view, EcsEntity entity)
    {

      navMesh.Value.SetDestination(currentTransform.position);
      navMesh.Value.speed = 0;
      view.EnemyAnimator.PlayWalk(false);
      SetToTargetDirection(currentTarget.transform, currentTransform);
      if (attackAbility.AttackCooldown <= attackAbility.LastAttackTime)
      {
        entity.Get<AttackEvent>();
        attackAbility.LastAttackTime = 0;
        attackAbility.Ability.DoAttack();
      }
    }
  }
}
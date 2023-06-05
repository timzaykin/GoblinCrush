using Core.Components.Common.MonoLinks;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using View.Enemy;

namespace Core.UnityComponents.MonoLinks
{
  public class EnemyViewMonoLink : MonoLink<EnemyViewLink>
  {
    public override void Make(ref EcsEntity entity)
    {
      entity.Get<EnemyViewLink>() = new EnemyViewLink
      {
        Value = GetComponent<EnemyView>()
      };
    }
  }
}
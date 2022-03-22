using Core.Components.Common.MonoLinks;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;

namespace Core.UnityComponents.MonoLinks.UnityBaseComponents
{
  public class GameObjectMonoLink : MonoLink<GameObjectLink>
  {
    public override void Make(ref EcsEntity entity)
    {
      entity.Get<GameObjectLink>() = new GameObjectLink
      {
        Value = gameObject
      };
    }
  }
}
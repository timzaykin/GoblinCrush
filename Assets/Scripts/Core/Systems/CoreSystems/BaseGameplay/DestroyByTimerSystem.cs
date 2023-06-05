using Core.Components.Common.MonoLinks;
using Core.Components.Objects.Tags;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class DestroyByTimerSystem : IEcsRunSystem
  {
    
    private readonly EcsFilter<DestroyByTimerTag> _filter = null;
    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var tag =ref _filter.Get1(index);

        tag.PassedTime += Time.deltaTime;
        if (tag.PassedTime >= tag.TimeToDestroy)
        {
          ref var entity  =ref _filter.GetEntity(index);
          var go = entity.Get<GameObjectLink>().Value;
          Object.Destroy(go);
          entity.Destroy();
        }
      }
    }
  }
}
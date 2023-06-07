using Core.Components.Events;
using Core.Components.Objects.Tags;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class CheckEnemyCountSystem : IEcsRunSystem
  {
    private readonly EcsFilter<EnemyTag> _filter = null;
    private readonly EcsFilter<NextLevelEnterEvent> _nextLevelfilter = null;
    private readonly EcsWorld _world = null;
    
    public void Run()
    {
      if(!_filter.IsEmpty()||!_nextLevelfilter.IsEmpty())return;
      _world.NewEntity().Get<NextLevelEnterEvent>();
    }
  }
}
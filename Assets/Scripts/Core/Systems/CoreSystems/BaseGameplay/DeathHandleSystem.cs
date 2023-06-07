using Core.Components.GameStates.GameplayEvents;
using Core.Components.Objects;
using Leopotam.Ecs;
using Services;
using View.Hero;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class DeathHandleSystem : IEcsRunSystem
  {
    private PauseService _pauseService = null;
    private readonly EcsFilter<DeadEvent> _filter = null;
    
    
    public void Run()
    {
      if(_filter.IsEmpty())return;
      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        var animator = entity.Get<PlayerAnimatorLink>().HeroAnimator;
        animator.PlayDeath();
        entity.Del<DeadEvent>();
        _pauseService.SetPause();
      }
    }
  }
}
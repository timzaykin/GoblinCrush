using Core.Components.GameStates;
using Leopotam.Ecs;
using Leopotam.Ecs.Ui.Components;
using Services;

namespace Core.Systems.UISystems
{
  public class UIGameProgressSystem : IEcsRunSystem
  {
    private const string Startgamebtn = "StartGameBtn";
    private readonly EcsFilter<EcsUiClickEvent> _filter = null;
    private readonly EcsFilter<GameProgress> _filterGameProgress = null;

    private PauseService _pauseService;

    public void Run()
    {
      foreach (var index in _filter)
      {
        var click = _filter.Get1(index);
        if (click.WidgetName.Equals(Startgamebtn))
        {
          ref var gameProgress = ref _filterGameProgress.Get1(0);
          gameProgress.IsPause = false;
          _pauseService.ResetPause();
        }
      }
    }
  }
}
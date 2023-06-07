using Core.Components.PhysicsEvents;
using Data;
using Infrastructure.Services;
using Infrastructure.Services.PersistentProgress;
using Infrastructure.Services.SaveLoad;
using Leopotam.Ecs;
using Services;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class ChangeLevelSystem : IEcsRunSystem
  {
    private readonly EcsFilter<ChangeLevelTriggerEvent> _filter = null;
    private LevelData _levelData = null;
    private ChangeLevelService _changeLevelService = null;

    private bool _isChangeLevelStarted;
    
    public void Run()
    {
      if(_filter.IsEmpty() || _isChangeLevelStarted)return;
      AllServices.Container.Single<IPersistentProgressService>().Progress.WorldData.LevelName =
        _levelData.NextLevelName;
      AllServices.Container.Single<ISaveLoadService>().SaveProgress();
      _changeLevelService.ChangeLevel();
      _isChangeLevelStarted = true;

    }
  }
}
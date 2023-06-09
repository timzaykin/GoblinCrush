using Core;
using Core.UnityComponents.UI;
using Data;
using Infrastructure.AssetManagement;
using Infrastructure.Factory;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using Infrastructure.Services.GameData;
using Infrastructure.Services.PersistentProgress;
using UnityEngine;
using View.Logic;

namespace Infrastructure.States
{
  public class LoadLevelState : IPayloadedState<string>
  {
    private readonly LoadingCurtain _curtain;
    private readonly IGameFactory _gameFactory;
    private readonly IPersistentProgressService _progressService;
    private readonly IGameDataService _gameDataService;
    private readonly GameStateMachine _gameStateMachine;
    private readonly SceneLoader _sceneLoader;

    private string _levelName;
    
    public LoadLevelState(GameStateMachine gameStateMachine,
      SceneLoader sceneLoader,
      LoadingCurtain curtain,
      IGameFactory gameFactory,
      IPersistentProgressService progressService,
      IGameDataService gameDataService)
    {
      _gameStateMachine = gameStateMachine;
      _sceneLoader = sceneLoader;
      _curtain = curtain;
      _gameFactory = gameFactory;
      _progressService = progressService;
      _gameDataService = gameDataService;
    }

    public void Enter(string sceneName)
    {
      _levelName = sceneName;
      _curtain.Show();
      _gameFactory.Cleanup();
      _sceneLoader.Load(_levelName, OnLoaded);
    }

    public void Exit()
    {
      _curtain.Hide();
    }

    private void OnLoaded()
    {
      InitGameWorld();
      InformProgressReaders();
    }

    private void InformProgressReaders()
    {
      foreach (ISavedProgressReader progressReader in _gameFactory.ProgressReaders)
      {
        progressReader.LoadProgress(_progressService.Progress);
      }
    }

    private void InitGameWorld()
    {
      var levelData = LoadLevelData();
      var hud = _gameFactory.CreateHud();
      AllServices.Container.Single<IAudioService>().GetSoundSystem().PlayMusic(levelData.EnvironmentTrack);
      InitializeEcs(levelData,hud, _gameFactory);
    }

    private LevelData LoadLevelData()
    {
      var gameData = _gameDataService.GetStaticData();
      var levelData = gameData.GetLevelByName(_levelName);
      return levelData;
    }


    private void InitializeEcs(LevelData levelData, GameObject hudGo, IGameFactory gameFactory)
    {
      
      Object.FindObjectOfType<EcsStartup>()?.Initialize(levelData, gameFactory, hudGo.GetComponent<GameHUD>(),()=> EnterGameLoop(levelData),
        () =>
        {
          _gameStateMachine.Enter<LoadLevelState, string>(_progressService.Progress.WorldData.LevelName);
        }
      );
    }

    private void EnterGameLoop(LevelData levelData)
    {
      _gameStateMachine.Enter<GameLoopState, LevelData>(levelData);
    }
  }
}
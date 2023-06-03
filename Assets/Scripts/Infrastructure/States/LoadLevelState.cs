﻿using Core;
using Data;
using Infrastructure.AssetManagement;
using Infrastructure.Factory;
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
      _sceneLoader.Load("Main", OnLoaded);
    }

    public void Exit()
    {
      _curtain.Hide();
    }

    private void OnLoaded()
    {
      InitGameWorld();
      InformProgressReaders();
      _gameStateMachine.Enter<GameLoopState>();
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
      _gameFactory.CreateHud();
      InitializeEcs(levelData, _gameFactory);
    }

    private LevelData LoadLevelData()
    {
      var gameData = _gameDataService.GetStaticData();
      var levelData = gameData.GetLevelByName(_levelName);
      return levelData;
    }


    private static void InitializeEcs(LevelData levelData, IGameFactory _gameFactory)
    {
      Object.FindObjectOfType<EcsStartup>()?.Initialize(levelData, _gameFactory);
    }
  }
}
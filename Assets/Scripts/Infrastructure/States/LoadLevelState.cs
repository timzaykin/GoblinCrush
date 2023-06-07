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
      _gameFactory.CreateHud();
      InitializeEcs(levelData, _gameFactory);
    }

    private LevelData LoadLevelData()
    {
      var gameData = _gameDataService.GetStaticData();
      var levelData = gameData.GetLevelByName(_levelName);
      return levelData;
    }


    private void InitializeEcs(LevelData levelData, IGameFactory gameFactory)
    {
      Object.FindObjectOfType<EcsStartup>()?.Initialize(levelData, gameFactory,()=> EnterGameLoop(levelData),
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
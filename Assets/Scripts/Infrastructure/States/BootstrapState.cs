using Data;
using Infrastructure.AssetManagement;
using Infrastructure.Factory;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using Infrastructure.Services.GameData;
using Infrastructure.Services.PersistentProgress;
using Infrastructure.Services.SaveLoad;
using Services.Input;
using UnityEngine;

namespace Infrastructure.States
{
  public class BootstrapState : IState
  {
    private const string Initial = "Initial";
    private readonly GameStateMachine _gameStateMachine;
    private readonly SceneLoader _sceneLoader;
    private readonly StaticData _staticData;
    private readonly SoundSystem _soundSystem;
    private readonly AllServices _services;

    public BootstrapState(GameStateMachine gameStateMachine, SceneLoader sceneLoader, StaticData staticData,
      SoundSystem soundSystem,
      AllServices services)
    {
      _gameStateMachine = gameStateMachine;
      _sceneLoader = sceneLoader;
      _staticData = staticData;
      _soundSystem = soundSystem;
      _services = services;
      RegisterServices();
    }

    public void Enter()
    {
      _sceneLoader.Load(Initial, EnterLoadLevel);
    }

    public void Exit()
    {
    }

    private void EnterLoadLevel()
    {
      _gameStateMachine.Enter<LoadProgressState>();
    }

    private void RegisterServices()
    {
      _services.RegisterSingle(InputService());
      _services.RegisterSingle<IAssets>(new AssetProvider());
      _services.RegisterSingle<IGameDataService>(new GameDataService(_staticData));
      _services.RegisterSingle<IAudioService>(new AudioService(_soundSystem));
      _services.RegisterSingle<IPersistentProgressService>(new PersistentProgressService());
      _services.RegisterSingle<IGameFactory>(new GameFactory(_services.Single<IAssets>()));
      _services.RegisterSingle<ISaveLoadService>(new SaveLoadService(_services.Single<IPersistentProgressService>(),
        _services.Single<IGameFactory>()));
    }

    private IInputService InputService()
    {
      if (Application.isEditor) return new StandaloneInput();

      var inputServiceObject = new GameObject();
      Object.DontDestroyOnLoad(inputServiceObject);
      var service = inputServiceObject.AddComponent<MobileInputService>();
      return service;
    }
  }
}
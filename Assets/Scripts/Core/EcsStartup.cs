using System;
using Core.Components.Common.Input;
using Core.Components.Core;
using Core.Components.PhysicsEvents;
using Core.Systems.CoreSystems;
using Core.Systems.CoreSystems.BaseGameplay;
using Core.Systems.InputSystems;
using Core.Systems.MoveSystems;
using Core.Systems.Spawners;
using Core.UnityComponents.UI;
using Data;
using Infrastructure.Factory;
using Infrastructure.Services;
using Leopotam.Ecs;
using Leopotam.Ecs.Ui.Systems;
#if UNITY_EDITOR
using Leopotam.Ecs.UnityIntegration;
#endif
using Services;
using Services.Input;
using UnityEngine;

namespace Core
{
  internal sealed class EcsStartup : MonoBehaviour
  {
    private const string Coregameplay = "CoreGameplay";
    private const string Movable = "Movable";
    private const string Spawn = "Spawn";
    private int _coreGameplaySystems;
    private EcsSystems _fixedSystem;
    private IGameFactory _gameFactory;

    private IInputService _inputService;

    private bool _isInitialized;

    private LevelData _levelData;
    private int _movableSystems;
    [SerializeField] private SceneData _sceneData;
    private PauseService _pauseService;
    private ScoreService _scoreService;
    private ChangeLevelService _changeLevelService;
    private GameHUD _gameHUD;

    private int _spawnSystems;

    [SerializeField] private StaticData _staticData;
    private EcsSystems _systems;
    [SerializeField] private EcsUiEmitter _uiEmitter;

    private EcsWorld _world;
    private Action _exitGameLoopStateAction;
    
    
    public void Initialize(LevelData levelData, IGameFactory gameFactory,GameHUD hud,  Action enterGameLoopStateAction, Action exitGameLoopStateAction)
    {
      _exitGameLoopStateAction = exitGameLoopStateAction;
      _world = new EcsWorld();
      _systems = new EcsSystems(_world, "UpdateSystems");
      _fixedSystem = new EcsSystems(_world, "FixedUpdateSystems");

      _levelData = levelData;
      _gameFactory = gameFactory;
      _gameHUD = hud;
      _gameHUD.Init(exitGameLoopStateAction, _sceneData);

      InitializedServices();
      InitializeObserver();

      InitializedUpdateSystems();
      InitializeFixedSystems();

      CalcSystemIndexes();

      Subscribe();

      enterGameLoopStateAction?.Invoke();
      SetGameplayState(true);
      _isInitialized = true;
    }


    private void InitializedServices()
    {
      _pauseService = new PauseService(false);
      _scoreService = new ScoreService();
      _changeLevelService = new ChangeLevelService(_exitGameLoopStateAction);
      _inputService = AllServices.Container.Single<IInputService>();
    }

    private void OnChangePauseState(bool isPause)
    {
      SetGameplayState(!isPause);
    }

    private void InitializeObserver()
    {
#if UNITY_EDITOR
      EcsWorldObserver.Create(_world);
      EcsSystemsObserver.Create(_systems);
      EcsSystemsObserver.Create(_fixedSystem);
#endif
    }

    private void InitializedUpdateSystems()
    {
      var inputSystems = InputSystems();
      var spawnSystems = SpawnSystems(Spawn);
      //EcsSystems uiSystems = UISystems();

      _systems
//			.Add(uiSystems)
        .Add(inputSystems)
        .Add(spawnSystems)
        .Add(new CameraMoveSystem())
        .Inject(_staticData)
        .Inject(_levelData)
        .Inject(_sceneData)
        .InjectUi(_uiEmitter)
        .Inject(_gameFactory)
        .Inject(_pauseService)
        .Inject(_scoreService)
        .Inject(_changeLevelService)
        .Inject(_inputService)
        .Inject(_gameHUD)
        .Init();
    }

    private void InitializeFixedSystems()
    {
      var coreSystems = CoreGameplaySystems(Coregameplay);
      //var scoreSystems = ScoreSystems();
      var movableSystems = MovableSystems(Movable);

      _fixedSystem
        .Add(coreSystems)
//			.Add(scoreSystems)
        .Add(movableSystems)
        .OneFrame<OnWeaponTriggerEvent>()
        .OneFrame<OnEnemyTriggerEnter>()
        .OneFrame<OnTriggerEnterEvent>()
        .Inject(_sceneData)
        .Inject(_staticData)
        .Inject(_levelData)
        .Inject(_pauseService)
        .Inject(_scoreService)
        .Inject(_changeLevelService)
        .Inject(_inputService)
        .Inject(_gameHUD)
        .Init();
    }

    // private EcsSystems UISystems()
    // {
    // 	return new EcsSystems(_world)
    // 		.Add(new UIGameProgressSystem());
    // }

    private EcsSystems ScoreSystems()
    {
      return new EcsSystems(_world)
        .Add(new ScoreCounterSystem())
        .OneFrame<OnObstacleExit>()
        .Add(new ObstacleTriggerEnterCheckerSystem());
    }

    private void CalcSystemIndexes()
    {
      _spawnSystems = _systems.GetNamedRunSystem(Spawn);
      _coreGameplaySystems = _fixedSystem.GetNamedRunSystem(Coregameplay);
      _movableSystems = _fixedSystem.GetNamedRunSystem(Movable);
    }

    private void Update()
    {
      if (!_isInitialized) return;
      _systems?.Run();
    }

    private void FixedUpdate()
    {
      if (!_isInitialized) return;
      _fixedSystem?.Run();
    }

    private void OnDestroy()
    {
      if (_fixedSystem != null)
      {
        _fixedSystem.Destroy();
        _fixedSystem = null;
      }

      if (_systems != null)
      {
        _systems.Destroy();
        _systems = null;
      }

      if (_world != null)
      {
        _world.Destroy();
        _world = null;
      }

      Unsubscribe();
    }

    private void SetGameplayState(bool value)
    {
      _systems.SetRunSystemState(_spawnSystems, value);
      _fixedSystem.SetRunSystemState(_coreGameplaySystems, value);
      _fixedSystem.SetRunSystemState(_movableSystems, value);
    }

    private void Subscribe()
    {
      _pauseService.ChangeStateEvent += OnChangePauseState;
    }

    private void Unsubscribe()
    {
      _pauseService.ChangeStateEvent -= OnChangePauseState;
    }

    private EcsSystems SpawnSystems(string name)
    {
      return new EcsSystems(_world, name)
        .Add(new SpawnPlayer())
        .Add(new SpawnSceneObjects())
        .Add(new SpawnEnemyObjects())
        .Add(new SpawnLevelEnterSystem())
        .Add(new SpawnSystem());
      ;
    }

    private EcsSystems InputSystems()
    {
      return new EcsSystems(_world)
        .OneFrame<InputDirection>()
        .Add(new InputSystem());
    }

    private EcsSystems MovableSystems(string name)
    {
      return new EcsSystems(_world, name)
        .Add(new MoveSystem())
        .Add(new UpdateProjectileMove())
        .Add(new EnemyFollowAndAttackSystem())
        .Add(new UpdateCharacterPosition())
        .Add(new SlowdownSystem());
    }

    private EcsSystems CoreGameplaySystems(string name)
    {
      return new EcsSystems(_world, name)
        .Add(new DestructibleCollisionCheckerSystem())
        .Add(new PlayerDamageCollisionSystem())
        .Add(new HandleEnemyTriggerCollisionSystem())
        .Add(new UpdateAbilityCooldownSystem())
        .Add(new DestroyByTimerSystem())
        .Add(new HandlePlayerDamageSystem())
        .Add(new CheckEnemyCountSystem())
        .Add(new ChangeLevelSystem())
        .Add(new DeathHandleSystem())
        ;
    }
  }
}
﻿using Infrastructure.AssetManagement;
using Infrastructure.Factory;
using Infrastructure.Services;
using Services.Input;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Infrastructure.States
{
    public class BootstrapState : IState
    {
        private const string Initial = "Initial";
        private readonly GameStateMachine _gameStateMachine;
        private readonly SceneLoader _sceneLoader;
        private readonly AllServices _services;

        public BootstrapState(GameStateMachine gameStateMachine, SceneLoader sceneLoader, AllServices services)
        {
            _gameStateMachine = gameStateMachine;
            _sceneLoader = sceneLoader;
            _services = services;
            RegisterServices();
        }

        public void Enter()
        {
            _sceneLoader.Load(Initial, onLoaded: EnterLoadLevel);
        }

        public void Exit()
        {
        }

        private void EnterLoadLevel() => 
            _gameStateMachine.Enter<LoadLevelState,string>("Main");

        private void RegisterServices()
        {
            _services.RegisterSingle<IInputService>(InputService());
            _services.RegisterSingle<IAssets>(new AssetProvider());
            _services.RegisterSingle<IGameFactory>(new GameFactory(_services.Single<IAssets>()));
        }

        private IInputService InputService()
        {
            if (Application.isEditor)
                return new StandaloneInput();
            else
            {
                var inputServiceObject = new GameObject();
                Object.DontDestroyOnLoad(inputServiceObject);
                MobileInputService service = inputServiceObject.AddComponent<MobileInputService>();
                return service;
            }
        }
    }
}
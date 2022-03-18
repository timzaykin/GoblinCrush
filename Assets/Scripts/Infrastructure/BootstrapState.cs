using System;
using Services.Input;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Infrastructure
{
    public class BootstrapState : IState
    {
        private const string Initial = "Initial";
        private readonly GameStateMachine _gameStateMachine;
        private readonly SceneLoader _sceneLoader;

        public BootstrapState(GameStateMachine gameStateMachine, SceneLoader sceneLoader)
        {
            _gameStateMachine = gameStateMachine;
            _sceneLoader = sceneLoader;
        }

        public void Enter()
        {
            
            RegisterServices();
            _sceneLoader.Load(Initial, onLoaded: EnterLoadLevel);
                
        }

        private void EnterLoadLevel() => 
            _gameStateMachine.Enter<LoadLevelState,string>("Main");

        private void RegisterServices()
        {
            Game.InputSrevice = RegisterInputService();
        }

        public void Exit()
        {
        }
        
        private IInputSrevice RegisterInputService()
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
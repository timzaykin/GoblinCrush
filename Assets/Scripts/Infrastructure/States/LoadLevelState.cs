using CodeBase.Logic;
using Core;
using Core.Data;
using Infrastructure.AssetManagement;
using Infrastructure.Factory;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Infrastructure.States
{
    public class LoadLevelState : IPayloadedState<string>
    {
        private readonly GameStateMachine _gameStateMachine;
        private readonly SceneLoader _sceneLoader;
        private readonly LoadingCurtain _curtain;
        private readonly IGameFactory _gameFactory;

        public LoadLevelState(GameStateMachine gameStateMachine,
            SceneLoader sceneLoader, 
            LoadingCurtain curtain, 
            IGameFactory gameFactory)
        {
            _gameStateMachine = gameStateMachine;
            _sceneLoader = sceneLoader;
            _curtain = curtain;
            _gameFactory = gameFactory;
        }

        public void Enter(string sceneName)
        {
            _curtain.Show();
            _sceneLoader.Load(sceneName, OnLoaded);
        }

        public void Exit()
        {
            _curtain.Hide();
        }

        private void OnLoaded()
        {
            var levelData = LoadLevelData();
            _gameFactory.CreateHud();
            InitializeEcs(levelData, _gameFactory);
            _gameStateMachine.Enter<GameLoopState>();
        }

        private LevelData LoadLevelData()
        {
            var levelData = new LevelData();
            levelData.PlayerPrefabPath = AssetPath.PrefabsPlayer;
            levelData.StartPosition = Vector3.zero;
            return levelData;
        }


        private static void InitializeEcs(LevelData levelData, IGameFactory _gameFactory) => 
            Object.FindObjectOfType<EcsStartup>()?.Initialize(levelData, _gameFactory);
    }
}
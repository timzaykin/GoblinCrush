using Core.Components.Common;
using Core.Data;
using Core.UnityComponents.Factories;
using Infrastructure;
using Leopotam.Ecs;

namespace Core.Systems.Spawners
{
	public class SpawnSystem : IEcsPreInitSystem, IEcsRunSystem
	{
		private EcsWorld _world;
		private SceneData _sceneData;
		
		private EcsFilter<SpawnPrefab> _spawnFilter = null;
		
		private PrefabFactory _factory;
		private IGameFactory _gameFactory;
		
		public void PreInit()
		{
			_factory = _sceneData.Factory;
			_factory.Initialize(_world,_gameFactory);
		}

		public void Run()
		{
			if (_spawnFilter.IsEmpty())
			{
				return;
			}

			foreach (int index in _spawnFilter)
			{
				ref EcsEntity spawnEntity = ref _spawnFilter.GetEntity(index);
				var spawnPrefabData = spawnEntity.Get<SpawnPrefab>();
				_factory.Spawn(spawnPrefabData);
				spawnEntity.Del<SpawnPrefab>();
			}
		}
	}
}
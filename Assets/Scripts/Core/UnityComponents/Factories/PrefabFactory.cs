using Core.Components.Common;
using Core.UnityComponents.MonoLinks.Base;
using Infrastructure;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.Factories
{
	public class PrefabFactory : MonoBehaviour
	{
		//TODO: Отрефакторить этот класс, убрать MonoBeh и добавить в DI
		
		private EcsWorld _world;
		private IGameFactory _gameFactory;
		public void Initialize(EcsWorld world, IGameFactory gameFactory)
		{
			_world = world;
			_gameFactory = gameFactory;
		}
		
		public void Spawn(SpawnPrefab spawnData)
		{
			GameObject gameObject =_gameFactory.CreateObject(spawnData.PrefabPath, spawnData.Position, spawnData.Rotation, spawnData.Parent);
			MonoEntity[] monoEntities = gameObject.GetComponentsInChildren<MonoEntity>();
			foreach (var monoEntity in monoEntities)
			{
				EcsEntity ecsEntity = _world.NewEntity();
				monoEntity.Make(ref ecsEntity);
			} 
			
		}
	}
}
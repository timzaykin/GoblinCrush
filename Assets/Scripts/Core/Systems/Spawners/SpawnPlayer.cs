using Core.Components.Common;
using Core.Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.Spawners
{
	public class SpawnPlayer : IEcsInitSystem
	{
		private EcsWorld _world = null;
		private LevelData _levelData;
		
		public void Init()
		{
			_world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
			{
				PrefabPath = _levelData.PlayerPrefabPath,
				Position = _levelData.StartPosition,
				Rotation = Quaternion.identity,
				Parent = null
			};
		}
	}
}
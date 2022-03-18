using Core.Components.Common;
using Core.Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.Spawners
{
    public class SpawnSceneObjects: IEcsInitSystem
    {
        private EcsWorld _world = null;
        private StaticData _staticData;
		
        public void Init()
        {
            foreach (var position in _staticData.SceneObjectPositions)
            {
                _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
                {
                    PrefabPath = _staticData.SceneObjectPrefab,
                    Position = position,
                    Rotation = Quaternion.identity,
                    Parent = null
                };
            }
            
        }
    }
}
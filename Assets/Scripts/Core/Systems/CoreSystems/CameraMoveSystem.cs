using Core.Components.Common.MonoLinks;
using Core.Components.Objects.Tags;
using Core.Data;
using Leopotam.Ecs;

namespace Core.Systems.CoreSystems
{
    public class CameraMoveSystem:IEcsRunSystem
    {

        private SceneData _sceneData = null;
        private StaticData _staticData = null;
        private EcsFilter<PlayerTag> _filter = null;
        
        public void Run()
        {
            foreach (var index in _filter)
            {
                ref var entity = ref _filter.GetEntity(index);
                ref var objectLink = ref entity.Get<GameObjectLink>();
                var cameraTransform = _sceneData.MainCamera.transform;
                cameraTransform.position = objectLink.Value.transform.position +  _staticData.CameraOffset;
                cameraTransform.LookAt(objectLink.Value.transform);
            }
        }
    }
}
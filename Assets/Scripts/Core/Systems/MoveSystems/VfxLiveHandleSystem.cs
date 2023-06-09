using Core.Components.Objects.Tags;
using Core.UnityComponents.Factories;
using Data;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.MoveSystems
{
  public class VfxLiveHandleSystem : IEcsRunSystem, IEcsPreInitSystem
  {
    private PrefabFactory _factory;
    private SceneData _sceneData = null;

    private readonly EcsFilter<VfxTag> _filter = null;

    public void PreInit()
    {
      _factory = _sceneData.Factory;
    }

    public void Run()
    {
      foreach (var index in _filter)
      {
        ref var data = ref _filter.Get1(index);
        if (data.LiveTime >= data.MaxLiveTime)
        {
          ref var entity = ref _filter.GetEntity(index);
          _factory.Free(entity);
        }

        data.LiveTime += Time.deltaTime;
      }
    }
  }
}
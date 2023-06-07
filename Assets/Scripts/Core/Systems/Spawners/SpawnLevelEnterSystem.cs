using Core.Components.Common;
using Core.Components.Events;
using Data;
using Leopotam.Ecs;

namespace Core.Systems.Spawners
{
  public class SpawnLevelEnterSystem: IEcsRunSystem
  {
    private LevelData _levelData;
    private readonly EcsWorld _world = null;
    private EcsFilter<NextLevelEnterEvent> _filter = null;

    private bool _isSpawned;
    
    public void Run()
    {
      if(_filter.IsEmpty() || _isSpawned) return;
      var enterObject = _levelData.LevelEnterObject;
      _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
      {
        PrefabPath = enterObject.PrefabPath,
        Position = enterObject.Position,
        Rotation = enterObject.Rotation,
        Parent = null
      };
      _isSpawned = true;
    }
  }
}
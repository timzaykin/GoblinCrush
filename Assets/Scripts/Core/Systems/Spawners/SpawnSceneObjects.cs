using Core.Components.Common;
using Data;
using Leopotam.Ecs;

namespace Core.Systems.Spawners
{
  public class SpawnSceneObjects : IEcsInitSystem
  {
    private LevelData _levelData;
    private readonly EcsWorld _world = null;

    public void Init()
    {
      foreach (var levelObject in _levelData.LevelObjects)
        _world.NewEntity().Get<SpawnPrefab>() = new SpawnPrefab
        {
          PrefabPath = levelObject.PrefabPath,
          Position = levelObject.Position,
          Rotation = levelObject.Rotation,
          Parent = null
        };
    }
  }
}
using Core.Components.Core;
using Data;
using Leopotam.Ecs;
using Services;

namespace Core.Systems.CoreSystems.BaseGameplay
{
  public class ScoreCounterSystem : IEcsRunSystem
  {
    private readonly EcsFilter<OnObstacleExit> _obstacleScoreFilter = null;
    private SceneData _sceneData;
    private ScoreService _score;
    private EcsWorld _world = null;

    public void Run()
    {
      if (_obstacleScoreFilter.IsEmpty())
        return;

      foreach (var index in _obstacleScoreFilter)
      {
        var obstacleScore = _obstacleScoreFilter.Get1(index);
        _score.AddScore(obstacleScore.Score);
        //_sceneData.Hud.SetScore(_score.Score);
      }
    }
  }
}
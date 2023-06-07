using System;

namespace Services
{
  public class ScoreService
  {
    public ScoreService(int startScore = 0)
    {
      Score = startScore;
    }

    public int Score { get; private set; }

    public void AddScore(int score) => 
      Score += score;
  }

  public class ChangeLevelService
  {
    private readonly Action _changeLevelAction;

    public ChangeLevelService(Action changeLevelAction)
    {
      _changeLevelAction = changeLevelAction;
    }

    public void ChangeLevel()
    {
      _changeLevelAction?.Invoke();
    }

  }
}
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
}
using Data;

namespace Infrastructure.Services.GameData
{
  public class GameDataService : IGameDataService
  {
    private StaticData _staticData;

    public GameDataService(StaticData staticData)
    {
      _staticData = staticData;
    }

    public StaticData GetStaticData()
    {
      return _staticData;
    }
  }
}
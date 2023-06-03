using Data;

namespace Infrastructure.Services.GameData
{
  public interface IGameDataService : IService
  {
    StaticData GetStaticData();
  }
}
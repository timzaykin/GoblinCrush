using System;

namespace Data
{
  [Serializable]
  public class WorldData
  {
    public string LevelName;

    public WorldData(string initialLevel)
    {
      LevelName = initialLevel;
    }
  }
}
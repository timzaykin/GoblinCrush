using System;

namespace Core.Components.Objects.Tags
{
  [Serializable]
  public struct DestroyByTimerTag
  {
    public float TimeToDestroy;
    public float PassedTime;
  }
}
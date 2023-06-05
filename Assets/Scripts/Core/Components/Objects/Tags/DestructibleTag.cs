using System;
using Core.UnityComponents.DestructibleBehaviours;

namespace Core.Components.Objects.Tags
{
  [Serializable]
  public struct DestructibleTag
  {
    public int Score;
    public DestructibleBehaviourBase Behavoiur;
  }
}
using System;
using UnityEngine.AI;

namespace Core.Components.Objects
{
  [Serializable]
  public struct NavMeshLink
  {
    public NavMeshAgent Value;
    public float UnitSpeed;
  }
}
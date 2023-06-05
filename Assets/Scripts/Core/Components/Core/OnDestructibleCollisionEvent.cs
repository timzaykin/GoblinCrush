using Leopotam.Ecs;
using UnityEngine;

namespace Core.Components.Core
{
  public struct OnDestructibleCollisionEvent
  {
    public EcsEntity TargetEntity;
    public GameObject ObstacleObject;
  }
}
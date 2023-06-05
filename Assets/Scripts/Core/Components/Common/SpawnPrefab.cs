using System;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Components.Common
{
  public struct SpawnPrefab
  {
    public string PrefabPath;
    public Vector3 Position;
    public Quaternion Rotation;
    public Transform Parent;
    public Action<MonoEntity> OnComplete;
  }
}
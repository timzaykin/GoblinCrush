using UnityEngine;

namespace Core.Components.Common
{
  public struct SpawnPrefab
  {
    public string PrefabPath;
    public Vector3 Position;
    public Quaternion Rotation;
    public Transform Parent;
  }
}
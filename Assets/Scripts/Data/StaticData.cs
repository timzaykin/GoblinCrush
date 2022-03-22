using UnityEngine;

namespace Data
{
  [CreateAssetMenu(menuName = "Config/StaticData", fileName = "StaticData", order = 0)]
  public class StaticData : ScriptableObject
  {
    public Vector3 CameraOffset;
    public float ClampVelocity = 0.2f;
    public Vector3 GlobalGravitation;
    public Vector3 PlayerAddForce;
    public Vector3[] SceneObjectPositions;
    public string SceneObjectPrefab;
    public float SpawnTimer;
  }
}
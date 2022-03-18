using System;
using UnityEngine;

namespace Core.Data
{
	[CreateAssetMenu(menuName = "Config/StaticData", fileName = "StaticData", order = 0)]
	public class StaticData : ScriptableObject
	{
		public String SceneObjectPrefab;
		public Vector3[] SceneObjectPositions;
		public Vector3 CameraOffset;
		public Vector3 GlobalGravitation;
		public float SpawnTimer;
		public Vector3 PlayerAddForce;
		public float ClampVelocity = 0.2f;
	}
}
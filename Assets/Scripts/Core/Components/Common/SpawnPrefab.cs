using System;
using UnityEngine;

namespace Core.Components.Common
{
	public struct SpawnPrefab
	{
		public String PrefabPath;
		public Vector3 Position;
		public Quaternion Rotation;
		public Transform Parent;
	}
}
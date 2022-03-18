using UnityEngine;

namespace Infrastructure
{
    public interface IGameFactory
    {
        GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null);
        void CreateHud();
    }
}
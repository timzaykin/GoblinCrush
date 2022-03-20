using Infrastructure.Services;
using UnityEngine;

namespace Infrastructure.Factory
{
    public interface IGameFactory: IService
    {
        GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null);
        void CreateHud();
    }
}
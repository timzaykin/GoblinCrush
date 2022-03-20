using Infrastructure.AssetManagement;
using UnityEngine;

namespace Infrastructure.Factory
{
    public class  GameFactory : IGameFactory
    {
        private readonly IAssets _assetProvider;

        public GameFactory(IAssets assetProvider)
        {
            _assetProvider = assetProvider;
        }

        public GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null) =>
            _assetProvider.Instantiate(path, at, rotation, parent);

        public void CreateHud() => 
            _assetProvider.Instantiate(AssetPath.HudPath);
    }
}
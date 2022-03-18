using UnityEngine;

namespace Infrastructure
{
    public class  GameFactory : IGameFactory
    {
        private const string HudPath = "Prefabs/Hud";
        
        private static GameObject Instantiate(string path)
        {
            var prefab  = Resources.Load<GameObject>(path);
            return Object.Instantiate(prefab);
        }

        private static GameObject Instantiate(string path, Vector3 at, Quaternion rotation = default, Transform parent = null)
        {
            var prefab  = Resources.Load<GameObject>(path);
            return Object.Instantiate(prefab, at, rotation, parent);
        }

        public GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null)
        {
            return Instantiate(path, at, rotation, parent);
        }

        public void CreateHud()
        {
            Instantiate(HudPath);
        }
    }
}
using UnityEngine;

namespace Infrastructure.AssetManagement
{
  public class AssetProvider : IAssets
  {
    public GameObject Instantiate(string path)
    {
      var prefab = Resources.Load<GameObject>(path);
      return Object.Instantiate(prefab);
    }

    public GameObject Instantiate(string path, Vector3 at, Quaternion rotation = default, Transform parent = null)
    {
      var prefab = Resources.Load<GameObject>(path);
      return Object.Instantiate(prefab, at, rotation, parent);
    }
  }
}
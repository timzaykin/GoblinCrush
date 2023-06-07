using UnityEngine;

namespace Core.UnityComponents
{
    public class RagdollWeapon : MonoBehaviour
    {
        void Start()
        {
            transform.SetParent(null);
            Destroy(gameObject, 10f);
        }
    }
}

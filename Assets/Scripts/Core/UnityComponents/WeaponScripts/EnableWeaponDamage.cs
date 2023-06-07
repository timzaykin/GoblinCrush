using UnityEngine;

namespace Core.UnityComponents.WeaponScripts
{
    public class EnableWeaponDamage : MonoBehaviour
    {
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private Collider _targetCollider;
        [SerializeField] private float _velocityValue;
        void Update()
        {
            _targetCollider.enabled = _rigidbody.velocity.magnitude > _velocityValue;
        }
    }
}

using System.Collections;
using UnityEngine;

namespace View.Hero
{
    public class EnableBallAndController : MonoBehaviour
    {
        [SerializeField] private Rigidbody _rigidbody;
        [SerializeField] private CharacterController _characterController;
    
        void Start()
        {
            StartCoroutine(nameof(DelayedActivation));
        }

        private IEnumerator DelayedActivation()
        {
            yield return new WaitForSeconds(1f);
            _rigidbody.constraints = RigidbodyConstraints.None;
            _rigidbody.velocity = Vector3.zero;
            _characterController.enabled = true;
        }
    }
}

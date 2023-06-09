using System;
using UnityEngine;
using UnityEngine.Serialization;

namespace View.Hero
{
  public class HeroRotation : MonoBehaviour
  {
   [SerializeField] private CharacterController _characterController;
   [SerializeField] private Rigidbody _ballRigidBody;
   [SerializeField] private HeroAnimator _heroAnimator;

    public void Update()
    {
      if (_characterController.velocity.magnitude > 0.1f && _ballRigidBody.velocity.magnitude < 20f)
        gameObject.transform.localRotation = Quaternion.LookRotation(_characterController.velocity);
      else if (_ballRigidBody.velocity.magnitude > 20f)
      {
        var ballTransform = _ballRigidBody.transform;
        gameObject.transform.LookAt(new Vector3(ballTransform.position.x,-0.5f, ballTransform.position.z));
        _heroAnimator.PlayAttack(true);
        return;
      }
      _heroAnimator.PlayAttack(false);

    }
  }
}
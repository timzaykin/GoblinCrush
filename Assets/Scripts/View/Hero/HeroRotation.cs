using UnityEngine;

namespace View.Hero
{
  public class HeroRotation : MonoBehaviour
  {
    [SerializeField] private CharacterController CharacterController;

    public void Update()
    {
      if (CharacterController.velocity.magnitude > 0.1f)
        gameObject.transform.localRotation = Quaternion.LookRotation(CharacterController.velocity);
    }
  }
}
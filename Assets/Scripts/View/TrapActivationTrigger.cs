using System;
using UnityEngine;

namespace View
{
  public class TrapActivationTrigger : MonoBehaviour
  {
    [SerializeField] private TrapAnimator _trapAnimator;
    
    public void OnTriggerEnter(Collider other)
    {
      _trapAnimator.StartAnimation();
      gameObject.SetActive(false);
    }
  }
}

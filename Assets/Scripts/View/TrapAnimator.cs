using System;
using System.Collections;
using UnityEngine;

namespace View
{
  public class TrapAnimator : MonoBehaviour
  {
    [SerializeField] private Transform _root;
    [SerializeField] private bool _changePosition;
    [SerializeField] private bool _setToStartPosition;
    [SerializeField] private Vector3 _startPosition;
    [SerializeField] private Vector3 _targetPosition;
    [SerializeField] private bool _changeRotation;
    [SerializeField] private Vector3 _targetEulerAngles;
    [SerializeField] private bool _isOneShot;
    [SerializeField] private float _speed = 1;

    private Vector3 _basePosition;
    private Quaternion _baseRotation;
    private Quaternion _targetRotation;
    
    public void StartAnimation()
    {
      if (_setToStartPosition) _root.localPosition = _startPosition;
      _basePosition = _root.localPosition;
      _baseRotation = _root.localRotation;
      _targetRotation = Quaternion.Euler(_targetEulerAngles);
      
      StartCoroutine(nameof(AnimationCoroutine));
    }

    public IEnumerator AnimationCoroutine()
    {
      var animate = true;
      var time = 0f;
      while (animate)
      {
        yield return new WaitForSeconds(0.03f);
        time += 0.03f;
        var value = Mathf.PingPong(time*_speed, 1);

        if (_changePosition) _root.localPosition = Vector3.Lerp(_basePosition, _targetPosition, value);
        if (_changeRotation) _root.localRotation = Quaternion.Lerp(_baseRotation,_targetRotation , value);
        if (Math.Abs(value - 1f) < 0.01f && _isOneShot) animate = false;
      }
    }
  }
}

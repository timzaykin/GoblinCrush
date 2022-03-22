using System;
using UnityEngine;

namespace Services.Input
{
  public class MobileInputService : MonoBehaviour, IInputService
  {
    public delegate void OnSwipe(Vector3 direction, float distance);

    private Vector3 _tapPositon;

    public bool isDisabled;
    public float Distance { get; private set; }
    public bool IsTapped { get; private set; }

    public Vector2 Axis { get; private set; }

    public event OnSwipe OnSwipeEvent;
    public event OnSwipe OnPressEvent;
    public event Action OnTapEvent;

    private void Update()
    {
      if (isDisabled) return;

      if (UnityEngine.Input.GetMouseButtonDown(0)) StartSwipe();

      if (IsTapped) ChangeAxisAndDistance();
    }

    private void StartSwipe()
    {
      _tapPositon = UnityEngine.Input.mousePosition;
      IsTapped = true;
      OnTapEvent?.Invoke();
    }

    private void ChangeAxisAndDistance()
    {
      var mPosition = UnityEngine.Input.mousePosition;
      var direction = mPosition - _tapPositon;
      var dist = Vector3.Distance(mPosition, _tapPositon);
      Axis = new Vector2(direction.normalized.x, direction.normalized.y);
      Distance = dist;
      OnPressEvent?.Invoke(direction, dist);
      if (UnityEngine.Input.GetMouseButtonUp(0)) CompleteSwipe(dist, direction);
    }

    private void CompleteSwipe(float dist, Vector3 direction)
    {
      if (dist > 0.3f)
        OnSwipeEvent?.Invoke(direction, dist);
      IsTapped = false;
    }
  }
}
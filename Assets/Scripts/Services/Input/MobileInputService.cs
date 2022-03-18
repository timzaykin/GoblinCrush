using System;
using UnityEngine;

namespace Services.Input
{
    public class MobileInputService : MonoBehaviour, IInputSrevice
    {
        public delegate void OnSwipe(Vector3 direction, float distance);

        public event OnSwipe OnSwipeEvent;
        public event OnSwipe OnPressEvent;
        public event Action OnTapEvent;

        private Vector3 _tapPositon;
        public bool IsTapped => _isTapped;
        private bool _isTapped;
        public Vector2 Axis { get; private set; }
        public float  Distance { get; private set; }
        
        public bool isDisabled = false;
 
        private void Update()
        {
            if(isDisabled) return;
     
            if (UnityEngine.Input.GetMouseButtonDown(0))
            {
                StartSwipe();
            }

            if (_isTapped)
            {
                ChangeAxisAndDistance();
            }
        }

        private void StartSwipe()
        {
            _tapPositon = UnityEngine.Input.mousePosition;
            _isTapped = true;
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
            if (UnityEngine.Input.GetMouseButtonUp(0))
            {
                CompleteSwipe(dist, direction);
            }
        }

        private void CompleteSwipe(float dist, Vector3 direction)
        {
            if (dist > 0.3f)
                OnSwipeEvent?.Invoke(direction, dist);
            _isTapped = false;
        }
    }
}
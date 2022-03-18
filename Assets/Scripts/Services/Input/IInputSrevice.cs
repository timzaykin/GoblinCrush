using UnityEngine;

namespace Services.Input
{
    public interface IInputSrevice
    {
        Vector2 Axis { get;}
        bool IsTapped { get;}
    }
}
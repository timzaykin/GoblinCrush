using UnityEngine;

namespace Services.Input
{
  public class StandaloneInput : IInputService
  {
    protected const string Horizontal = "Horizontal";
    protected const string Vertical = "Vertical";

    public Vector2 Axis =>
      new Vector2(UnityEngine.Input.GetAxis(Horizontal), UnityEngine.Input.GetAxis(Vertical));

    public bool IsTapped =>
      UnityEngine.Input.GetAxis(Horizontal) != 0f ||
      UnityEngine.Input.GetAxis(Vertical) != 0f;
  }
}
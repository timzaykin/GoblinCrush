using UnityEngine;
using UnityEngine.UI;

namespace Core.UnityComponents.UI
{
  public class GameOverPanel : MonoBehaviour
  {
    [SerializeField] private Button _restartLevelButton;
    public Button RestartLevelButton => _restartLevelButton;
  }
}
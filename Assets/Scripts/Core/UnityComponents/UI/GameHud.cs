using System;
using Data;
using UnityEngine;

namespace Core.UnityComponents.UI
{
  public class GameHUD : MonoBehaviour
  {
    [SerializeField] private HealthBar _healthBar;
    [SerializeField] private GameOverPanel _gameOverPanel;
  

    public HealthBar HealthBar => _healthBar;
    public GameOverPanel GameOverPanel => _gameOverPanel;

    public void Init(Action restartLevelAction, SceneData sceneData)
    {
      _gameOverPanel.RestartLevelButton.onClick.AddListener(()=>
      {
        sceneData.Factory.CleanUp();
        restartLevelAction?.Invoke();
        ShowHideGameOverPanel(false);
      });
      ShowHideGameOverPanel(false);
    }

    public void ShowHideGameOverPanel(bool isShow)
    {
      GameOverPanel.gameObject.SetActive(isShow);
    }

  }
}
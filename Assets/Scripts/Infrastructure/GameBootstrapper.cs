using Infrastructure.States;
using UnityEngine;
using View.Logic;

namespace Infrastructure
{
  public class GameBootstrapper : MonoBehaviour, ICoroutineRunner
  {
    [SerializeField]private LoadingCurtain CurtainPrefab;
    
    private Game _game;

    private void Awake()
    {
      _game = new Game(this, Instantiate(CurtainPrefab));
      _game.StateMachine.Enter<BootstrapState>();

      DontDestroyOnLoad(this);
    }
  }
}
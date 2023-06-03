using Data;
using Infrastructure.States;
using UnityEngine;
using View.Logic;

namespace Infrastructure
{
  public class GameBootstrapper : MonoBehaviour, ICoroutineRunner
  {
    [SerializeField]private LoadingCurtain CurtainPrefab;
    [SerializeField] private StaticData _staticData;
    private Game _game;

    private void Awake()
    {
      _game = new Game(this, _staticData, Instantiate(CurtainPrefab));
      _game.StateMachine.Enter<BootstrapState>();

      DontDestroyOnLoad(this);
    }
  }
}
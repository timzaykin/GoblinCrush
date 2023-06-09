using Data;
using Infrastructure.States;
using UnityEngine;
using View.Logic;

namespace Infrastructure
{
  public class GameBootstrapper : MonoBehaviour, ICoroutineRunner
  {
    [SerializeField]private LoadingCurtain CurtainPrefab;
    [SerializeField]private StaticData _staticData;
    [SerializeField] private SoundSystem _soundSystem;
    private Game _game;

    private void Awake()
    {
      _game = new Game(this, _staticData,_soundSystem, Instantiate(CurtainPrefab));
      _game.StateMachine.Enter<BootstrapState>();

      DontDestroyOnLoad(this);
    }
  }
}
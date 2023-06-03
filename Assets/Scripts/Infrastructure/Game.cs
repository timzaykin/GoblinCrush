using Data;
using Infrastructure.Services;
using Infrastructure.States;
using View.Logic;

namespace Infrastructure
{
  public class Game
  {
    public LevelData LevelData;
    public GameStateMachine StateMachine;

    public Game(ICoroutineRunner coroutineRunner, StaticData staticData, LoadingCurtain curtain)
    {
      StateMachine = new GameStateMachine(new SceneLoader(coroutineRunner), curtain,staticData, AllServices.Container);
    }
  }
}
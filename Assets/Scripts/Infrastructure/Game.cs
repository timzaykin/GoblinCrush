using CodeBase.Logic;
using Core.Data;
using Services.Input;

namespace Infrastructure
{
    public class Game
    {
        public static IInputSrevice InputSrevice;
        public GameStateMachine StateMachine;
        public LevelData LevelData;

        public Game(ICoroutineRunner coroutineRunner, LoadingCurtain curtain)
        {
            StateMachine = new GameStateMachine(new SceneLoader(coroutineRunner), curtain);
        }

    }
}
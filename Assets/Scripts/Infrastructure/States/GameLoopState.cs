using Data;

namespace Infrastructure.States
{
  public class GameLoopState: IPayloadedState<LevelData>
  {
    private readonly GameStateMachine _gameStateMachine;


    public GameLoopState(GameStateMachine gameStateMachine)
    {
      _gameStateMachine = gameStateMachine;
      
    }
    
    public void Enter(LevelData payload)
    {
   
    }

    public void Exit()
    {
     
    }
  }
}
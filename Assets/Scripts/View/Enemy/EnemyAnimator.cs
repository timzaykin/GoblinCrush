using System;
using UnityEngine;
using View.Logic;

namespace View.Enemy
{
  public class EnemyAnimator : MonoBehaviour, IAnimationStateReader
  {
    private static readonly int MoveHash = Animator.StringToHash("Walk");
    private static readonly int AttackHash = Animator.StringToHash("Attack");
    private static readonly int DashHash = Animator.StringToHash("Dash");
    private static readonly int CombatHash = Animator.StringToHash("Combat");

    
    public Animator Animator;
    
    public bool IsAttacking => State == AnimatorState.Attack;

    public AnimatorState State { get; private set; }



    public void EnteredState(int stateHash)
    {
      State = StateFor(stateHash);
      StateEntered?.Invoke(State);
    }
    
    public void ExitedState(int stateHash) => 
      StateExited?.Invoke(StateFor(stateHash));

    public event Action<AnimatorState> StateEntered;
    public event Action<AnimatorState> StateExited;
    
    
    public void PlayAttack() => 
      Animator.SetTrigger(AttackHash);

    public void PlayWalk(bool value) =>
      Animator.SetBool(MoveHash, value);

    public void SetCombat(bool value) =>
      Animator.SetBool(CombatHash, value);

    public void SetDash(bool value) =>
      Animator.SetBool(DashHash, value);

    private AnimatorState StateFor(int stateHash)
    {
      AnimatorState state;
        state = AnimatorState.Unknown;

      return state;
    }
  }
}
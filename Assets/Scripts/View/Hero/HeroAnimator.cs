using System;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using UnityEngine;
using View.Logic;

namespace View.Hero
{
  public class HeroAnimator : MonoBehaviour, IAnimationStateReader
  {
    private static readonly int MoveHash = Animator.StringToHash("Walking");
    private static readonly int AttackHash = Animator.StringToHash("Attack");
    private static readonly int HitHash = Animator.StringToHash("Hit");
    private static readonly int DieHash = Animator.StringToHash("Die");
    private readonly int _attackStateHash = Animator.StringToHash("Attack Normal");
    private readonly int _deathStateHash = Animator.StringToHash("Die");
    private readonly int _idleStateFullHash = Animator.StringToHash("Base Layer.Idle");

    private readonly int _idleStateHash = Animator.StringToHash("Idle");
    private readonly int _walkingStateHash = Animator.StringToHash("Run");

    public Animator Animator;
    public CharacterController CharacterController;

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

    private void Update()
    {
      Animator.SetFloat(MoveHash, CharacterController.velocity.magnitude, 0.1f, Time.deltaTime);
    }


    public void PlayHit() => 
      Animator.SetTrigger(HitHash);

    public void PlayAttack(bool val) => 
      Animator.SetBool(AttackHash, val);

    public void PlayDeath() => 
      Animator.SetTrigger(DieHash);

    public void ResetToIdle() => 
      Animator.Play(_idleStateHash, -1);

    private AnimatorState StateFor(int stateHash)
    {
      AnimatorState state;
      if (stateHash == _idleStateHash)
        state = AnimatorState.Idle;
      else if (stateHash == _attackStateHash)
        state = AnimatorState.Attack;
      else if (stateHash == _walkingStateHash)
        state = AnimatorState.Walking;
      else if (stateHash == _deathStateHash)
        state = AnimatorState.Died;
      else
        state = AnimatorState.Unknown;

      return state;
    }
  }
}
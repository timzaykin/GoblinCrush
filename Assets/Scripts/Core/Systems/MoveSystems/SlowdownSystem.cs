using Core.Components.Common.Input;
using Core.Components.Objects;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.MoveSystems
{
  public class SlowdownSystem : IEcsRunSystem
  {
    private readonly EcsFilter<CharacterLink, Position> _filter = null;
    private readonly EcsFilter<InputDirection> _inputFilter = null;

    private float frac;

    public void Run()
    {
      if (_inputFilter.IsEmpty())
      {
        if (_filter.IsEmpty()) return;

        foreach (var index in _filter)
        {
          ref var position = ref _filter.Get2(index);
          position.Value = Vector3.LerpUnclamped(position.Value, Vector3.zero, Mathf.Clamp(frac, 0f, 1f));
        }

        frac += Time.deltaTime / 10;
      }
      else
      {
        frac = 0;
      }
    }
  }
}
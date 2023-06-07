using Core.Components.Common.Input;
using Core.Components.GameStates.GameplayEvents;
using Core.Components.Objects;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.MoveSystems
{
  public class MoveSystem : IEcsRunSystem
  {
    private EcsFilter<CharacterLink, Position>.Exclude<DeadEvent> _characterFilter = null;
    private readonly EcsFilter<InputDirection> _filter = null;

    public void Run()
    {
      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        ref var position = ref entity.Get<Position>();
        var direction = _filter.Get1(index);

        position.Value = new Vector3(direction.Value.x, 0, direction.Value.y);
      }
    }
  }
}
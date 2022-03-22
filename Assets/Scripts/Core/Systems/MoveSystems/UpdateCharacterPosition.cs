using Core.Components.Objects;
using Leopotam.Ecs;

namespace Core.Systems.MoveSystems
{
  public class UpdateCharacterPosition : IEcsRunSystem
  {
    private readonly EcsFilter<CharacterLink, Position> _filter = null;

    public void Run()
    {
      if (_filter.IsEmpty()) return;

      foreach (var index in _filter)
      {
        ref var character = ref _filter.Get1(index);
        ref var newPosition = ref _filter.Get2(index);

        character.Value.SimpleMove(newPosition.Value * 7);
      }
    }
  }
}
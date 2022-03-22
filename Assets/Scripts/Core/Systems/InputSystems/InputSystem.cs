using Core.Components.Common.Input;
using Core.Components.Objects.Tags;
using Leopotam.Ecs;
using Services.Input;

namespace Core.Systems.InputSystems
{
  public class InputSystem : IEcsRunSystem
  {
    private readonly EcsFilter<PlayerTag> _filter = null;
    private readonly IInputService _inputService = null;
    private EcsWorld _world = null;

    public void Run()
    {
      var isHasInput = _inputService.IsTapped;
      if (!isHasInput) return;

      foreach (var index in _filter)
      {
        ref var entity = ref _filter.GetEntity(index);
        ref var input = ref entity.Get<InputDirection>();
        input.Value = _inputService.Axis;
      }
    }
  }
}
using Core.Components.Common.Input;
using Core.Components.Objects.Tags;
using Leopotam.Ecs;
using Services.Input;

namespace Core.Systems.InputSystems
{
	public class InputSystem : IEcsRunSystem
	{
		private EcsWorld _world = null;
		private EcsFilter<PlayerTag> _filter = null;
		private IInputService _inputService = null;
		
		public void Run()
		{
			var isHasInput = _inputService.IsTapped;
			if (!isHasInput)
			{
				return;
			}

			foreach (int index in _filter)
			{
				ref EcsEntity entity = ref _filter.GetEntity(index);
				ref var input = ref entity.Get<InputDirection>();
				input.Value = _inputService.Axis;
			}
		}
	}
}
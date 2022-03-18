using Core.Components.Common.Input;
using Core.Components.Objects;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.Systems.MoveSystems
{
	public class MoveSystem : IEcsRunSystem
	{
		private EcsFilter<InputDirection> _filter = null;
		private EcsFilter<CharacterLink, Position> _characterFilter = null;
		
		public void Run()
		{
			foreach (int index in _filter)
			{
				ref EcsEntity entity = ref _filter.GetEntity(index);
				ref Position position = ref entity.Get<Position>();
				InputDirection direction = _filter.Get1(index);

				position.Value = new Vector3(direction.Value.x, 0, direction.Value.y);
			}
		}
	}
}
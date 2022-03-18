using Core.Components.Objects;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine;

namespace Core.UnityComponents.MonoLinks
{
    public class CharacterControllerMonoLink : MonoLink<CharacterLink>
    {
        public override void Make(ref EcsEntity entity)
        {
            entity.Get<CharacterLink>() = new CharacterLink
            {
                Value = GetComponent<CharacterController>()
            };
        }
    }
}
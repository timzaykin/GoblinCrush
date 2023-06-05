using System;
using Core.Components.Objects;
using Core.UnityComponents.MonoLinks.Base;
using Leopotam.Ecs;
using UnityEngine.AI;

namespace Core.UnityComponents.MonoLinks
{
  public class NavMeshAgentMonoLink : MonoLink<NavMeshLink>
  {
    public void Start()
    {
      GetComponent<NavMeshAgent>().Warp(transform.position);
    }
  }
}
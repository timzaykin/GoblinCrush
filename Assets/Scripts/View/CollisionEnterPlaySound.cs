using System;
using Infrastructure;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using UnityEngine;

namespace View
{
  public class CollisionEnterPlaySound : MonoBehaviour
  {
    [SerializeField]private string _soundName;
    private SoundSystem _soundSystem;
    
    public void Start()
    {
      _soundSystem = AllServices.Container.Single<IAudioService>().GetSoundSystem();
    }

    public void OnCollisionExit(Collision other)
    {
      _soundSystem.PlayEffectClip(_soundName);
    }
  }
}

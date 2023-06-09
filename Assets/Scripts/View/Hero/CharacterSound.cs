using System.Collections;
using Infrastructure;
using Infrastructure.Services;
using Infrastructure.Services.AudioService;
using UnityEngine;

namespace View.Hero
{
  public class CharacterSound : MonoBehaviour
  {
    [SerializeField] private CharacterController _characterController;

    private SoundSystem _soundSystem;
    private bool _isPlaying;

    public void Start()
    {
      _soundSystem = AllServices.Container.Single<IAudioService>().GetSoundSystem();
    }

    public void Update()
    {
      if (_characterController.velocity.magnitude > 0.2f && !_isPlaying)
      {
        _isPlaying = true;
        _soundSystem.PlayCharacterClip("Steps");

      }
      else if (_characterController.velocity.magnitude < 0.2f && _isPlaying)
      {
        _soundSystem.StopCharacterClip();
        _isPlaying = false;
      }
    }
  }
}
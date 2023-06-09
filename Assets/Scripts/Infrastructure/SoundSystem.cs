using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace Infrastructure
{
    public class SoundSystem :  SerializedMonoBehaviour
    {
   
        [SerializeField] private AudioSource _musicSource;
        [SerializeField] private AudioSource _EffectsSource;
        [SerializeField] private AudioSource _characterSource;
        [SerializeField] private AudioSource _UiSource;
        [SerializeField] private Dictionary<string, AudioClip> _clipsFx;
        [SerializeField] private Dictionary<string, AudioClip> _clipsMusic;
        [SerializeField] private Dictionary<string, AudioClip> _clipsUi;

        private bool _isCooldown;

        public void PlayEffectClip(string name, bool isPriority = false)
        {
            if ((!_EffectsSource.isPlaying&&!_isCooldown) || isPriority)
            {
                StopCoroutine(nameof(PlayEffectWithCooldown));
                _EffectsSource.PlayOneShot(_clipsFx[name]);
                StartCoroutine(nameof(PlayEffectWithCooldown));
            }
        }

        public IEnumerator PlayEffectWithCooldown()
        {
            _isCooldown = true;
            yield return new WaitForSeconds(0.5f);
            _isCooldown = false;
        }

        public void PlayCharacterClip(string name)
        {
            _characterSource.enabled = true;
            _characterSource.clip = _clipsFx[name];
            _characterSource.Play();
        }

        public void StopCharacterClip()
        {
            _characterSource.enabled = false;
            _characterSource.Stop();
        }

        public float GetEffectClipLength(string name)
        {
            return _clipsFx[name].length;
        }

        public void PlayUiClip(string name)
        {
            _UiSource.PlayOneShot(_clipsUi[name]);
        }

        public void PlayMusic(string name)
        {
            _musicSource.clip = _clipsMusic[name];
            _musicSource.Play();
        }

        public void DisableEnableMusic( bool value)
        {
            _musicSource.mute = value;
        }

        public void DisableEnableEffects( bool value)
        {
            _characterSource.mute = value;
            _EffectsSource.mute = value;
            _UiSource.mute = value;
        }

    
    }
}

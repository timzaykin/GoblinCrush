
namespace Infrastructure.Services.AudioService
{
  public class AudioService : IAudioService
  {
    private SoundSystem _soundSystem;

    public AudioService(SoundSystem soundSystem)
    {
      _soundSystem = soundSystem;
    }

    public SoundSystem GetSoundSystem()
    {
      return _soundSystem;
    }
  }
}
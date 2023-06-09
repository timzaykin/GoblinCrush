namespace Infrastructure.Services.AudioService
{
  public interface IAudioService: IService
  {
    SoundSystem GetSoundSystem();
  }
}
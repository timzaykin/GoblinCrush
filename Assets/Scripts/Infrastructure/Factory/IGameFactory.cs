using System.Collections.Generic;
using Infrastructure.Services;
using Infrastructure.Services.PersistentProgress;
using UnityEngine;

namespace Infrastructure.Factory
{
  public interface IGameFactory : IService
  {
    List<ISavedProgressReader> ProgressReaders { get; }
    List<ISavedProgress> ProgressWriters { get; }
    GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null);
    GameObject CreateHud();
    void Cleanup();
  }
}
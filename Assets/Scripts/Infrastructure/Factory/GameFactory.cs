﻿using System.Collections.Generic;
using Infrastructure.AssetManagement;
using Infrastructure.Services.PersistentProgress;
using UnityEngine;

namespace Infrastructure.Factory
{
  public class GameFactory : IGameFactory
  {
    private readonly IAssets _assets;

    public List<ISavedProgressReader> ProgressReaders { get; } = new List<ISavedProgressReader>();
    public List<ISavedProgress> ProgressWriters { get; } = new List<ISavedProgress>();

    public GameFactory(IAssets assets)
    {
      _assets = assets;
    }

    public GameObject CreateObject(string path, Vector3 at, Quaternion rotation = default, Transform parent = null)
    {
      var gameObject = InstantiateRegistered(path, at, rotation, parent);
      return gameObject;
    }

    public void CreateHud() => 
      InstantiateRegistered(AssetPath.HudPath);

    public void Cleanup()
    {
      ProgressReaders.Clear();
      ProgressWriters.Clear();
    }

    private GameObject InstantiateRegistered(string path, Vector3 at, Quaternion rotation, Transform parent)
    {
      GameObject gameObject = _assets.Instantiate(path, at, rotation, parent);
      RegisterProgressWatchers(gameObject);
      return gameObject;
    }

    private GameObject InstantiateRegistered(string path)
    {
      GameObject gameObject = _assets.Instantiate(path);
      RegisterProgressWatchers(gameObject);
      return gameObject;
    }

    private void RegisterProgressWatchers(GameObject gameObject)
    {
      foreach (ISavedProgressReader progressReader in gameObject.GetComponentsInChildren<ISavedProgressReader>())
        Register(progressReader);
    }

    private void Register(ISavedProgressReader progressReader)
    {
      if(progressReader is ISavedProgress progressWriter)
        ProgressWriters.Add(progressWriter);
      
      ProgressReaders.Add(progressReader);
    }
  }
}
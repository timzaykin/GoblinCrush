using UnityEngine;

namespace Data
{
  [CreateAssetMenu(menuName = "Config/EnemyData", fileName = "EnemyData", order = 2)]
  public class EnemyData : ScriptableObject
  {
    public string EnemyId;
    public string PrefabPath;
  }
}
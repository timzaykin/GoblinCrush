using UnityEngine;

namespace Core.UnityComponents.UI
{
  public class HealthBar : MonoBehaviour
  {
    [SerializeField]private GameObject[] _healthPoints;
  
    public void Start()
    {
      SetHealthPointsCount(3);
    }

    public void SetHealthPointsCount(int count)
    {
      for (int i = 0; i < _healthPoints.Length; i++)
      {
        if (i <= count-1) _healthPoints[i].SetActive(true);
        else _healthPoints[i].SetActive(false);
      }
    }

  }
}
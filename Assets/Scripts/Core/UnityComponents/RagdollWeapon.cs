using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RagdollWeapon : MonoBehaviour
{
    void Start()
    {
        transform.SetParent(null);
        Destroy(gameObject, 10f);
    }
}

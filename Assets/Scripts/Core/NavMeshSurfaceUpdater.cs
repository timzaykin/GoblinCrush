using System.Collections;
using Unity.AI.Navigation;
using UnityEngine;

namespace Core
{
    public class NavMeshSurfaceUpdater : MonoBehaviour
    {
        [SerializeField] private LayerMask _layerMask;
        private NavMeshSurface _surface;
        
        public void UpdateNavMesh()
        {
            _surface = GetComponent<NavMeshSurface>();
            _surface.layerMask = _layerMask;
            _surface.BuildNavMesh();
        }
        
        
    }
}

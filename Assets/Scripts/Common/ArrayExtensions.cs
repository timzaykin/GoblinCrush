using System.Collections.Generic;
using UnityEngine;

namespace Common
{
    public static class ArrayExtensions
    {
        public static T GetRandom<T>(this IList<T> array)
        {
            if (array.Count == 1)
                return array[0];

            return array[Random.Range(0, array.Count)];
        }

        /// <summary>
        /// Перемешивает массив так, чтобы все элементы в нем шли в случайном порядке. Используется алгоритм
        /// Fisher–Yates shuffle.
        /// </summary>
        public static void Shuffle<T>(this IList<T> array)
        {
            for (var i = array.Count - 1; i > 0; i--)
            {
                var j = Random.Range(0, i + 1);
                (array[i], array[j]) = (array[j], array[i]);
            }
        }
    }
}
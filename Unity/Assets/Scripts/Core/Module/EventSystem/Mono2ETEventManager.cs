using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public static class Mono2ETEventManager 
    {
        public delegate void ScrollRectDir(int dir);

        public static event ScrollRectDir scrollDir;

        public static void OnScrollRectDir(int dir)
        {
            scrollDir(dir);
        }
    }
}

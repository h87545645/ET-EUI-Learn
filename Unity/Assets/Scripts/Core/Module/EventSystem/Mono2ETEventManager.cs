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
    
    public struct ScrollRectDirectionEvent
    {
        public int dir;
    } 
    
    public struct GameFinishEvent
    {
        // public long instandId;
    }
    
    public struct FrogLanded
    {

    }
    
    public struct FrogCollisionEnter2D
    {
        public bool isUp;
        public bool isLeft;
    }
    
    public struct FrogGameCameraChange
    {
        public int Index;
    }
}

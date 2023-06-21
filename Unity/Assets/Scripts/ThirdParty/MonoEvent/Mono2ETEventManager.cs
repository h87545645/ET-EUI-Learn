using System.Collections;
using System.Collections.Generic;

public struct ScrollRectDirectionEvent
{
    public int dir;
} 

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

    namespace EventType
    {
        public struct ScrollRectDirectionEvent
        {
            public int dir;
        } 
    
        public struct GameFinishEvent
        {
            // public bool isPlayer;
            public long unitId;
        }
    
        public struct FrogLanded
        {
            public long unitId;
        }
    
        public struct FrogCollisionEnter2D
        {
            public long unitId;
            public bool isUp;
            public bool isLeft;
        }
    
        public struct FrogGameCameraChange
        {
            public int Index;

            public long UnitId;
        }
    
        public struct FrogEnableCamera
        {
            // public GameObject go;

            public bool enable;
        }
    }

    
}

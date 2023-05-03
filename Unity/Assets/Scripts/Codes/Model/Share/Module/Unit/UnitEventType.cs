using Unity.Mathematics;

namespace ET
{
    namespace EventType
    {
        public struct ChangePosition
        {
            public Unit Unit;
            public float3 OldPos;
        }

        public struct ChangeRotation
        {
            public Unit Unit;
        }
        
        public struct FrogLastPosition
        {
            public float2 Position;
        }
        
        public struct FrogEnterCharge
        {
            public long unitId;
        }
        
        public struct FrogCancelCharge
        {
            public long unitId;
        }
        
        public struct FrogDirection
        {
            public long unitId;
            public bool force;

            public ET.FrogDirection dir;
        }
        
        public struct FrogJump
        {
            public long unitId;
            public float chargeTime;
        }
        
        public struct ChangeFrogState
        {
            public Unit Unit;

            public FrogState state;
            
        }
        
        public struct FrogEnterStanding
        {
            public Unit Unit;

        }
        
        public struct FrogGuideSpeakEnd
        {
            // public Unit Unit;

        }
        
        
        
        
        
        
        
        
        
        
        //mono
        // public struct ScrollRectDirectionEvent
        // {
        //     public int dir;
        // } 
        //
        // public struct GameFinishEvent
        // {
        //     // public bool isPlayer;
        //     public long unitId;
        // }
        //
        // public struct FrogLanded
        // {
        //
        // }
        //
        // public struct FrogCollisionEnter2D
        // {
        //     public bool isUp;
        //     public bool isLeft;
        // }
        //
        // public struct FrogGameCameraChange
        // {
        //     public int Index;
        //
        //     public long UnitId;
        // }
        //
        // public struct FrogEnableCamera
        // {
        //     // public GameObject go;
        //
        //     public bool enable;
        // }
    }
}
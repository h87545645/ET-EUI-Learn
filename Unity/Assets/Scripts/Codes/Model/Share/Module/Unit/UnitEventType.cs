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
            public Unit Unit;
        }
        
        public struct FrogCancelCharge
        {
            public Unit Unit;
        }
        
        public struct FrogDirection
        {
            public Unit Unit;

            public bool force;

            public ET.FrogDirection dir;
        }
        
        public struct FrogJump
        {
            public Unit Unit;

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
    }
}
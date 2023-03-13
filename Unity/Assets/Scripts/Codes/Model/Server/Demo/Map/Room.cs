using System.Collections.Generic;
using System.Linq;
using Unity.Mathematics;

namespace ET
{
    /// <summary>
    /// 房间状态
    /// </summary>
    public enum RoomState : byte
    {
        Idle,       
        Ready,      
        Game        
    }

    /// <summary>
    /// 房间对象
    /// </summary>

    [ChildOf]
    public sealed class Room : Entity,IAwake,IDestroy,IUpdate
    {
        public readonly Dictionary<long, int> seats = new Dictionary<long, int>();
        public  Unit[] units = new Unit[2];

        public  float3[] playerDefaultPos = new float3[2];
        
        //房间状态
        public RoomState State { get; set; } = RoomState.Idle;

        //房间玩家数量
        public int Count { get { return seats.Values.Count; } }

        public long GameTime = 0;
        
    }
}

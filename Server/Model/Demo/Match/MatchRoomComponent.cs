using System.Linq;
using System.Collections.Generic;
using ET;

namespace ET
{
    /// <summary>
    /// 匹配房间管理组件，逻辑在MatchRoomComponentSystem扩展
    /// </summary>
    [ComponentOf(typeof(Scene))]
    public class MatchRoomComponent : Entity,IAwake,IDestroy
    {
        //所有房间列表
        public readonly Dictionary<long, Room> rooms = new Dictionary<long, Room>();

        //游戏中房间列表
        public readonly Dictionary<long, Room> gameRooms = new Dictionary<long, Room>();

        //等待中房间列表
        public readonly Dictionary<long, Room> readyRooms = new Dictionary<long, Room>();

        //空闲房间列表
        public readonly Queue<Room> idleRooms = new Queue<Room>();

        //房间总数
        public int TotalCount { get { return this.rooms.Count; } }

        //游戏中房间数
        public int GameRoomCount { get { return gameRooms.Count; } }

        //等待中房间数
        public int ReadyRoomCount { get { return readyRooms.Where(p => p.Value.Count < 2).Count(); } }

        //空闲房间数
        public int IdleRoomCount { get { return idleRooms.Count; } }


    }
}

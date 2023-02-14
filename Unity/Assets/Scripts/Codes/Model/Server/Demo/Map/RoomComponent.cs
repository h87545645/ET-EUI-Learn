using System.Collections.Generic;

namespace ET
{
    /// <summary>
    /// 房间管理组件
    /// </summary>
    [ComponentOf(typeof(Scene))]
    [ChildOf(typeof(Room))]
    public class RoomComponent :  Entity,IAwake,IDestroy
    {
        public readonly Dictionary<long, Room> rooms = new Dictionary<long, Room>();
        
    }
}

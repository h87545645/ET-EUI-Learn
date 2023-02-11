namespace ET
{
    [FriendClass(typeof(RoomComponent))]
    public static class RoomComponentSystem
    {
        public class RoomComponentDestroySystem: DestroySystem<RoomComponent>
        {
            public override void Destroy(RoomComponent self)
            {
                if (self.IsDisposed)
                {
                    return;
                }

                self.Dispose();

                foreach (var room in self.rooms.Values)
                {
                    room.Dispose();
                }
            }
        }
            
            
            /// <summary>
            /// 添加房间
            /// </summary>
            /// <param name="room"></param>
            public static void Add(this RoomComponent self, Room room)
            {
                self.rooms.Add(room.InstanceId, room);
            }

            /// <summary>
            /// 获取房间
            /// </summary>
            /// <param name="id"></param>
            /// <returns></returns>
            public static Room Get(this RoomComponent self,long id)
            {
                Room room;
                self.rooms.TryGetValue(id, out room);
                return room;
            }

            /// <summary>
            /// 移除房间并返回
            /// </summary>
            /// <param name="id"></param>
            /// <returns></returns>
            public static Room Remove(this RoomComponent self,long id)
            {
                Room room = Get(self ,id);
                self.rooms.Remove(id);
                return room;
            }
       
    }
}
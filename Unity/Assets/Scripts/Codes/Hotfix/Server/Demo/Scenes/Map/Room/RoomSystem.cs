using Unity.Mathematics;

namespace ET.Server
{
    [FriendOf(typeof(Room))]
    public static class RoomSystem
    {
        
        [ObjectSystem]
        public class RoomAwakeSystem : AwakeSystem<Room>
        {
            protected override void Awake(Room self)
            {
                self.playerDefaultPos = new float3[]{new float3(-20,0,0),new float3(20,0,0)};
            }
        }
        
        public class RoomDestroySystem: DestroySystem<Room>
        {
            protected override void Destroy(Room self)
            {
                if (self.IsDisposed)
                {
                    return;
                }

                self.Dispose();

                self.seats.Clear();

                for (int i = 0; i < self.units.Length; i++)
                {
                    if (self.units[i] != null)
                    {
                        self.units[i].Dispose();
                        self.units[i] = null;
                    }
                }

                self.State = RoomState.Idle;
            }
        }
        
        
        /// <summary>
        /// 添加玩家
        /// </summary>
        /// <param name="unit"></param>
        public static void Add(this Room self, Unit unit)
        {
            int seatIndex = self.GetEmptySeat();
            //玩家需要获取一个座位坐下
            if (seatIndex >= 0)
            {
                self.units[seatIndex] = unit;
                self.seats[unit.UserID] = seatIndex;

                unit.RoomID = self.InstanceId;
            }
        }

        /// <summary>
        /// 获取玩家
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Unit Get(this Room self, long id)
        {
            int seatIndex = self.GetGamerSeat(id);
            if (seatIndex >= 0)
            {
                return self.units[seatIndex];
            }

            return null;
        }

        /// <summary>
        /// 获取所有玩家
        /// </summary>
        /// <returns></returns>
        public static Unit[] GetAll(this Room self)
        {
            return self.units;
        }

        /// <summary>
        /// 获取玩家座位索引
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static int GetGamerSeat(this Room self, long id)
        {
            if (self.seats.TryGetValue(id, out int seatIndex))
            {
                return seatIndex;
            }

            return -1;
        }

        /// <summary>
        /// 移除玩家并返回
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Unit Remove(this Room self, long id)
        {
            int seatIndex = self.GetGamerSeat(id);
            if (seatIndex >= 0)
            {
                Unit unit = self.units[seatIndex];
                self.units[seatIndex] = null;
                self.seats.Remove(id);

                unit.RoomID = 0;
                return unit;
            }

            return null;
        }

        /// <summary>
        /// 获取空座位
        /// </summary>
        /// <returns>返回座位索引，没有空座位时返回-1</returns>
        public static int GetEmptySeat(this Room self)
        {
            for (int i = 0; i < self.units.Length; i++)
            {
                if (self.units[i] == null)
                {
                    return i;
                }
            }

            return -1;
        }

        /// <summary>
        /// 广播消息
        /// </summary>
        /// <param name="message"></param>
        public static void Broadcast(this Room self, IActorMessage message)
        {
            foreach (Unit unit in self.units)
            {
                if (unit == null || unit.isOffline)
                {
                    continue;
                }
                // ActorMessageSender actorProxy = unit.GetComponent<UnitGateComponent>().GetActorMessageSender();
                // actorProxy.Send(message);
                MessageHelper.SendToClient(unit,message);
            }
        }
    }
}


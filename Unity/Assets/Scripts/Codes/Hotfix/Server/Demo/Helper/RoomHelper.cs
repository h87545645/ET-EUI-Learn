

namespace ET.Server
{
    [FriendOf(typeof (GateMapComponent))]
    [FriendOf(typeof (RoomComponent))]
    public static class RoomHelper
    {
        public static void PlayerExit(Unit unit)
        {
            RoomComponent roomComponent = unit.DomainScene().GetComponent<RoomComponent>();
            Room room = roomComponent.Get(unit.RoomID);
            Unit[] units = room.GetAll();
            bool isEmptyRoom = true;
            foreach (Unit user in units)
            {
                if (user.UserID == unit.UserID)
                {
                    user.isOffline = true;
                }
                if (!user.isOffline)
                {
                    isEmptyRoom = false;
                }
            }

            if (isEmptyRoom)
            {
                UnitComponent unitComponent = unit.DomainScene().GetComponent<UnitComponent>();
                foreach (Unit user in units)
                {
                    unitComponent?.Remove(user.Id);
                    room.Remove(user.UserID);
                    user.Dispose();
                }

                roomComponent.Remove(unit.RoomID);
            }
        }
    }
}
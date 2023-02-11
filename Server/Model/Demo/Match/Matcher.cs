using ET;

namespace ET
{


    /// <summary>
    /// 匹配对象
    /// </summary>
    
    [ChildType(typeof(Scene))]
    public sealed class Matcher : Entity ,IAwake<long> , IDestroy
    {
        //用户ID（唯一）
        public long UserID { get;  set; }

        //玩家GateActorID
        public long PlayerID { get; set; }

        //客户端与网关服务器的SessionID
        public Session session { get; set; }

        // public long gateId { get; set; }
   
    }
}

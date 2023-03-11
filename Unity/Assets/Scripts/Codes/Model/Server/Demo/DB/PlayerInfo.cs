﻿namespace ET
{
    /// <summary>
    /// 用户信息
    /// </summary>
    [ChildOf]
    public class PlayerInfo : Entity, IAwake
    {
        public long AccountId { get; set; }
        //昵称
        public string NickName { get; set; }

        //胜场
        public int Wins { get; set; }

        //负场
        public int Loses { get; set; }

        //金币
        public long Coin { get; set; }
        
        //最佳完成时间
        public long BestTime { get; set; }
        
        //最佳跳跃次数
        public long BestJumpCnt { get; set; }
    }
}
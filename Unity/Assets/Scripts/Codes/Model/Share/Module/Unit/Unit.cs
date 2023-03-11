﻿using System.Diagnostics;
using MongoDB.Bson.Serialization.Attributes;
using Unity.Mathematics;

namespace ET
{
    [ChildOf(typeof(UnitComponent))]
    [DebuggerDisplay("ViewName,nq")]
    public class Unit: Entity, IAwake<int>
    {
        
        //用户ID（唯一）
        public long UserID { get;  set; }
        //player id
        public long PlayerId { get;  set; }
        //玩家所在房间ID
        public long RoomID { get; set; }
        
        //玩家昵称
        public string PlayerName{ get;  set; }
        
        //是否离线
        public bool isOffline { get; set; }
        
        //机器人
        public bool isRobot { get; set; }
        public int ConfigId { get; set; } //配置表id

        [BsonIgnore]
        public UnitConfig Config => UnitConfigCategory.Instance.Get(this.ConfigId);

        public UnitType Type => (UnitType)UnitConfigCategory.Instance.Get(this.ConfigId).Type;

        [BsonElement]
        private float3 position; //坐标

        [BsonIgnore]
        public float3 Position
        {
            get => this.position;
            set
            {
                float3 oldPos = this.position;
                this.position = value;
                EventSystem.Instance.Publish(this.DomainScene(), new EventType.ChangePosition() { Unit = this, OldPos = oldPos });
            }
        }

        [BsonIgnore]
        public float3 Forward
        {
            get => math.mul(this.Rotation, math.forward());
            set => this.Rotation = quaternion.LookRotation(value, math.up());
        }
        
        [BsonElement]
        private quaternion rotation;
        
        [BsonIgnore]
        public quaternion Rotation
        {
            get => this.rotation;
            set
            {
                this.rotation = value;
                EventSystem.Instance.Publish(this.DomainScene(), new EventType.ChangeRotation() { Unit = this });
            }
        }

        protected override string ViewName
        {
            get
            {
                return $"{this.GetType().Name} ({this.Id})";
            }
        }
        
        
        //frog model
        
    }
}
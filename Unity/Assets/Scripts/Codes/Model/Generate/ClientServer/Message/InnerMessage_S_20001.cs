using ET;
using ProtoBuf;
using System.Collections.Generic;
namespace ET
{
// using
	[ResponseType(nameof(M2G_PlayerEnterMatchResponse))]
	[Message(InnerMessage.G2M_PlayerEnterMatchRequest)]
	[ProtoContract]
	public partial class G2M_PlayerEnterMatchRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

		[ProtoMember(1)]
		public long PlayerID { get; set; }

		[ProtoMember(2)]
		public long UserID { get; set; }

		[ProtoMember(3)]
		public long SessionID { get; set; }

	}

	[Message(InnerMessage.M2G_PlayerEnterMatchResponse)]
	[ProtoContract]
	public partial class M2G_PlayerEnterMatchResponse: ProtoObject, IResponse
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

		[ProtoMember(91)]
		public int Error { get; set; }

		[ProtoMember(92)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(M2M_CreateRoomResponse))]
	[Message(InnerMessage.M2M_CreateRoomRequest)]
	[ProtoContract]
	public partial class M2M_CreateRoomRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

	}

	[Message(InnerMessage.M2M_CreateRoomResponse)]
	[ProtoContract]
	public partial class M2M_CreateRoomResponse: ProtoObject, IResponse
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

		[ProtoMember(91)]
		public int Error { get; set; }

		[ProtoMember(92)]
		public string Message { get; set; }

		[ProtoMember(1)]
		public long RoomID { get; set; }

	}

	[ResponseType(nameof(M2G_PlayerEnterRoomResponse))]
	[Message(InnerMessage.G2M_PlayerEnterRoomRequest)]
	[ProtoContract]
	public partial class G2M_PlayerEnterRoomRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

		[ProtoMember(91)]
		public long ActorId { get; set; }

		[ProtoMember(1)]
		public long PlayerID { get; set; }

		[ProtoMember(2)]
		public long UserID { get; set; }

		[ProtoMember(3)]
		public long SessionID { get; set; }

	}

	[Message(InnerMessage.M2G_PlayerEnterRoomResponse)]
	[ProtoContract]
	public partial class M2G_PlayerEnterRoomResponse: ProtoObject, IResponse
	{
		[ProtoMember(90)]
		public int RpcId { get; set; }

		[ProtoMember(91)]
		public int Error { get; set; }

		[ProtoMember(92)]
		public string Message { get; set; }

		[ProtoMember(1)]
		public long GamerID { get; set; }

	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//demo follow
	[ResponseType(nameof(ObjectQueryResponse))]
	[Message(InnerMessage.ObjectQueryRequest)]
	[ProtoContract]
	public partial class ObjectQueryRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

		[ProtoMember(3)]
		public long InstanceId { get; set; }

	}

	[ResponseType(nameof(A2M_Reload))]
	[Message(InnerMessage.M2A_Reload)]
	[ProtoContract]
	public partial class M2A_Reload: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(InnerMessage.A2M_Reload)]
	[ProtoContract]
	public partial class A2M_Reload: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2G_LockResponse))]
	[Message(InnerMessage.G2G_LockRequest)]
	[ProtoContract]
	public partial class G2G_LockRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Id { get; set; }

		[ProtoMember(3)]
		public string Address { get; set; }

	}

	[Message(InnerMessage.G2G_LockResponse)]
	[ProtoContract]
	public partial class G2G_LockResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(G2G_LockReleaseResponse))]
	[Message(InnerMessage.G2G_LockReleaseRequest)]
	[ProtoContract]
	public partial class G2G_LockReleaseRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Id { get; set; }

		[ProtoMember(3)]
		public string Address { get; set; }

	}

	[Message(InnerMessage.G2G_LockReleaseResponse)]
	[ProtoContract]
	public partial class G2G_LockReleaseResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(ObjectAddResponse))]
	[Message(InnerMessage.ObjectAddRequest)]
	[ProtoContract]
	public partial class ObjectAddRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

		[ProtoMember(3)]
		public long InstanceId { get; set; }

	}

	[Message(InnerMessage.ObjectAddResponse)]
	[ProtoContract]
	public partial class ObjectAddResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(ObjectLockResponse))]
	[Message(InnerMessage.ObjectLockRequest)]
	[ProtoContract]
	public partial class ObjectLockRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

		[ProtoMember(3)]
		public long InstanceId { get; set; }

		[ProtoMember(4)]
		public int Time { get; set; }

	}

	[Message(InnerMessage.ObjectLockResponse)]
	[ProtoContract]
	public partial class ObjectLockResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(ObjectUnLockResponse))]
	[Message(InnerMessage.ObjectUnLockRequest)]
	[ProtoContract]
	public partial class ObjectUnLockRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

		[ProtoMember(3)]
		public long OldInstanceId { get; set; }

		[ProtoMember(4)]
		public long InstanceId { get; set; }

	}

	[Message(InnerMessage.ObjectUnLockResponse)]
	[ProtoContract]
	public partial class ObjectUnLockResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(ObjectRemoveResponse))]
	[Message(InnerMessage.ObjectRemoveRequest)]
	[ProtoContract]
	public partial class ObjectRemoveRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

	}

	[Message(InnerMessage.ObjectRemoveResponse)]
	[ProtoContract]
	public partial class ObjectRemoveResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	[ResponseType(nameof(ObjectGetResponse))]
	[Message(InnerMessage.ObjectGetRequest)]
	[ProtoContract]
	public partial class ObjectGetRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long Key { get; set; }

	}

	[Message(InnerMessage.ObjectGetResponse)]
	[ProtoContract]
	public partial class ObjectGetResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long InstanceId { get; set; }

	}

	[ResponseType(nameof(G2R_GetLoginKey))]
	[Message(InnerMessage.R2G_GetLoginKey)]
	[ProtoContract]
	public partial class R2G_GetLoginKey: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public string Account { get; set; }

		[ProtoMember(3)]
		public long AccountId { get; set; }

	}

	[Message(InnerMessage.G2R_GetLoginKey)]
	[ProtoContract]
	public partial class G2R_GetLoginKey: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public long Key { get; set; }

		[ProtoMember(5)]
		public long GateId { get; set; }

	}

	[Message(InnerMessage.G2M_SessionDisconnect)]
	[ProtoContract]
	public partial class G2M_SessionDisconnect: ProtoObject, IActorLocationMessage
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

	}

	[Message(InnerMessage.ObjectQueryResponse)]
	[ProtoContract]
	public partial class ObjectQueryResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

		[ProtoMember(4)]
		public byte[] Entity { get; set; }

	}

	[ResponseType(nameof(M2M_UnitTransferResponse))]
	[Message(InnerMessage.M2M_UnitTransferRequest)]
	[ProtoContract]
	public partial class M2M_UnitTransferRequest: ProtoObject, IActorRequest
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public long OldInstanceId { get; set; }

		[ProtoMember(3)]
		public byte[] Unit { get; set; }

		[ProtoMember(4)]
		public List<byte[]> Entitys { get; set; }

		[ProtoMember(5)]
		public bool robot { get; set; }

	}

	[Message(InnerMessage.M2M_UnitTransferResponse)]
	[ProtoContract]
	public partial class M2M_UnitTransferResponse: ProtoObject, IActorResponse
	{
		[ProtoMember(1)]
		public int RpcId { get; set; }

		[ProtoMember(2)]
		public int Error { get; set; }

		[ProtoMember(3)]
		public string Message { get; set; }

	}

	public static class InnerMessage
	{
		 public const ushort G2M_PlayerEnterMatchRequest = 20002;
		 public const ushort M2G_PlayerEnterMatchResponse = 20003;
		 public const ushort M2M_CreateRoomRequest = 20004;
		 public const ushort M2M_CreateRoomResponse = 20005;
		 public const ushort G2M_PlayerEnterRoomRequest = 20006;
		 public const ushort M2G_PlayerEnterRoomResponse = 20007;
		 public const ushort ObjectQueryRequest = 20008;
		 public const ushort M2A_Reload = 20009;
		 public const ushort A2M_Reload = 20010;
		 public const ushort G2G_LockRequest = 20011;
		 public const ushort G2G_LockResponse = 20012;
		 public const ushort G2G_LockReleaseRequest = 20013;
		 public const ushort G2G_LockReleaseResponse = 20014;
		 public const ushort ObjectAddRequest = 20015;
		 public const ushort ObjectAddResponse = 20016;
		 public const ushort ObjectLockRequest = 20017;
		 public const ushort ObjectLockResponse = 20018;
		 public const ushort ObjectUnLockRequest = 20019;
		 public const ushort ObjectUnLockResponse = 20020;
		 public const ushort ObjectRemoveRequest = 20021;
		 public const ushort ObjectRemoveResponse = 20022;
		 public const ushort ObjectGetRequest = 20023;
		 public const ushort ObjectGetResponse = 20024;
		 public const ushort R2G_GetLoginKey = 20025;
		 public const ushort G2R_GetLoginKey = 20026;
		 public const ushort G2M_SessionDisconnect = 20027;
		 public const ushort ObjectQueryResponse = 20028;
		 public const ushort M2M_UnitTransferRequest = 20029;
		 public const ushort M2M_UnitTransferResponse = 20030;
	}
}

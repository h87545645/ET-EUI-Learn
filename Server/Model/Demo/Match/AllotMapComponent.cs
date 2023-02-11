using System.Collections.Generic;


namespace ET
{
    /// <summary>
    /// 分配房间服务器组件，逻辑在AllotMapComponentSystem扩展
    /// </summary>
    [ComponentOf(typeof(Scene))]
    public class AllotMapComponent : Entity, IAwake
    {
        // public readonly List<StartConfig> MapAddress = new List<StartConfig>();
    }
}

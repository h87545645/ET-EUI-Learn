using System;
using System.Collections.Generic;

namespace ET.Server
{
    [ComponentOf(typeof(Scene))]
    public class GateSessionKeyComponent : Entity, IAwake
    {
        public readonly Dictionary<long, Tuple<long,string>> sessionKey = new Dictionary<long, Tuple<long,string>>();
    }
}
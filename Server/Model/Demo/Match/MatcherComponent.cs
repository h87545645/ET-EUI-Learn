using System.Linq;
using System.Collections.Generic;
using ET;

namespace ET
{
    /// <summary>
    /// 匹配对象管理组件
    /// </summary>
    [ComponentOf(typeof(Scene))]
    public class MatcherComponent : Entity,IAwake<Matcher>,IDestroy
    {
        public readonly Dictionary<long, Matcher> matchers = new Dictionary<long, Matcher>();

        //匹配对象数量
        public int Count { get { return matchers.Count; } }

        
    }
}

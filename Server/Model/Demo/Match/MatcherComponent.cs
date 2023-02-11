using System.Linq;
using System.Collections.Generic;
using ET;

namespace ET
{
    /// <summary>
    /// 匹配对象管理组件
    /// </summary>
    [ComponentOf(typeof(Scene))]
    [ChildType(typeof(Matcher))]
    public class MatcherComponent : Entity,IAwake,IDestroy
    {
        public readonly Dictionary<long, Matcher> matchers = new Dictionary<long, Matcher>();

        //匹配对象数量
        public int Count { get { return matchers.Count; } }

        
    }
}

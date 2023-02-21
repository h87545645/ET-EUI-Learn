using Honeti;
using UnityEngine;

namespace ET
{
    [ComponentOf(typeof (Scene))]
    public  class I18NComponent: Entity , IAwake
    {
        public I18N langMgr;
    }
}



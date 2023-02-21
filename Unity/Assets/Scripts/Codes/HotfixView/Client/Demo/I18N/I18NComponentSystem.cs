using ET.Client;
using Honeti;

namespace ET
{
    public static class I18NComponentSystem
    {
        [ObjectSystem]
        public class PelicanComponentAwakeSystem : AwakeSystem<I18NComponent>
        {
            protected override void Awake(I18NComponent self)
            {
                self.langMgr = GlobalComponent.Instance.I18NRoot.GetComponent<I18N>();
            }
            
        }
    }
}


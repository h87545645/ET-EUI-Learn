/*
* @Author: TimTian
* @Description: 接受mono层scrollrect遥感输入，转发事件
* @Date: 2023年02月25日 星期六 17:02:35
* @Modify:
*/
namespace ET.Client
{
    [Event(SceneType.Process)]
    public class ScrollRectDirHandler: AEvent<EventType.ScrollRectDirectionEvent>
    {
        protected override async ETTask Run(Scene scene, EventType.ScrollRectDirectionEvent args)
        {
            EventSystem.Instance.Publish(scene.GetComponent<ClientSceneManagerComponent>().Get(1).CurrentScene(), new EventType.FrogDirection() { force = false, dir = (ET.FrogDirection)args.dir});
        }
    }
}
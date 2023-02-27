
/*
* @Author: TimTian
* @Description: 角色落地时触发
* @Date: 2023年02月27日 星期一 21:02:14
* @Modify:
*/

using UnityEngine;

namespace ET.Client
{
    [Event(SceneType.Process)]
    [FriendOf(typeof(FrogComponent))]
    public class FrogLandedHandler: AEvent<FrogLanded>
    {
        protected override async ETTask Run(Scene scene, FrogLanded args)
        {
            // EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogDirection() { force = false, dir = (ET.FrogDirection)args.dir});
            Unit player = UnitHelper.GetMyUnitFromClientScene(scene.DomainScene());
            player.GetComponent<FrogComponent>().direction = ET.FrogDirection.None;
            // fragHero.direction = Game_Direction.None;
            await TimerComponent.Instance.WaitAsync(50);
            Log.Debug("frag ready");
            // fragHero.IsReady = true;
            if (Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow))
            {
                ET.FrogDirection direction = Input.GetKey(KeyCode.LeftArrow) ? ET.FrogDirection.Left :  ET.FrogDirection.Right;
                // fragHero.SetHeroineState(new WalkingState(fragHero));
                // fragHero.fragAnim.SetBool("walk", true);
                Debug.Log("landing over to walk dir : " +direction);
                EventSystem.Instance.Publish(scene.DomainScene(), new EventType.FrogDirection() { force = false, dir = direction});
                // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, direction,false);
            }
            else
            {
                player.GetComponent<FrogComponent>().fragAnim.SetBool("standing", true);
                // fragHero.fragAnim.SetBool("jump-down",true);
                player.GetComponent<FrogComponent>().SetHeroineState(new StandingState(player.GetComponent<FrogComponent>()));
            }
        }
        
    }
}
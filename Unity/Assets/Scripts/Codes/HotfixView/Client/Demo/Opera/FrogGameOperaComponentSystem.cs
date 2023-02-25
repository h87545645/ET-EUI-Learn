using UnityEngine;

namespace ET.Client
{
    [FriendOf(typeof(FrogGameOperaComponent))]
    public static class FrogGameOperaComponentSystem
    {
        [ObjectSystem]
        public class FrogGameOperaComponentAwakeSystem : AwakeSystem<FrogGameOperaComponent>
        {
            protected override void Awake(FrogGameOperaComponent self)
            {
                
            }
        }

        [ObjectSystem]
        public class FrogGameOperaComponentUpdateSystem: UpdateSystem<FrogGameOperaComponent>
        {
            protected override void Update(FrogGameOperaComponent self)
            {
                if (!self.inputEnable)
                {
                    return;
                }
                
                if (self._lastTime > 0 && Time.time - self._lastTime > 1)
                {
                    // EventCenter.PostEvent<float>(Game_Event.FragGameJump, 1);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogJump() { chargeTime = 1 });
                    self._lastTime = 0;
                }
                
                if (Input.GetKey(KeyCode.LeftArrow))
                {
                    // Debug.Log("left arrow");
                    // left.OnPointerDown(null);
                    // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.Left,false);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() {  force = false, dir = ET.FrogDirection.Left});
                }else if ( Input.GetKeyUp(KeyCode.LeftArrow))
                {
                    // Debug.Log("-------------------left key up  :");
                    // left.OnPointerUp(null);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() {  force = false, dir = ET.FrogDirection.None});
                    // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.None,false);
                } 
                if (Input.GetKey(KeyCode.RightArrow)  /*&& !Input.GetKey(KeyCode.RightArrow)*/ )
                {
                    // right.OnPointerDown(null);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() {  force = false, dir = ET.FrogDirection.Right});
                    // EventCenter.PostEvent<Game_Direction, bool>(Game_Event.FragGameDirection, Game_Direction.Right, false);
                }else if (Input.GetKeyUp(KeyCode.RightArrow)/*&& !Input.GetKey(KeyCode.LeftArrow)*/)
                {
                    // Debug.Log("-------------------right key up  :");
                    // right.OnPointerUp(null);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() { force = false, dir = ET.FrogDirection.None});
                    // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.None,false);
                }
        
                if (Input.GetKeyDown(KeyCode.Space))
                {
                    Debug.Log("-------------------space key down  :");
                    if (self._onPointerDownStart)
                    {
                        return;
                    }

                    self._onPointerDownStart = true;
                    // EventCenter.PostEvent(Game_Event.FragGameCharge);
                    EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogEnterCharge() { });
                    self._lastTime = Time.time;
                   
                }else if (Input.GetKeyUp(KeyCode.Space))
                {
                    Debug.Log("-------------------space key up  :");
                    if (self._lastTime > 0/* && Time.time - _lastTime > 0.05*/)
                    {
                        // EventCenter.PostEvent<float>(Game_Event.FragGameJump, Time.time - self._lastTime);
                        EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogJump() { chargeTime = Time.time - self._lastTime });
                        self._lastTime = 0;
                        //Debug.Log("̧��");
                    }
                    else
                    {
                        if (self._lastTime > 0)
                        {
                            Debug.Log("===>>> frog jump OnPointerUp cancel");
                            self._lastTime = 0;
                            // EventCenter.PostEvent(Game_Event.FragGameChargeCancel);
                            EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogCancelCharge() { });
                        }
                    }
                    self._onPointerDownStart = false;
                }
            }
        }
        
        public static void EnableInput(this FrogGameOperaComponent self ,bool enable)
        {
            self.inputEnable = enable;
            // self.jump.enabled = enable;
            // self.moveRocker.enabled = enable;
            // left.enabled = enable;
            // right.enabled = enable;
        }
    }
}


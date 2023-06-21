using UnityEngine;
using System.Collections;
using ET;
using ET.Client;

namespace ET.Client
{
    [FriendOf(typeof(FrogComponent))]
    public class StandingState : IBaseState
    {
        private FrogComponent _fragHore;
        public StandingState(FrogComponent frag)
        {
            _fragHore = frag;
            _fragHore.fragAnim.SetBool("standing", true);
            _fragHore.fragAnim.speed = 1f;
            _fragHore.LastPosition = _fragHore.heroRenderer.transform.position;
            // EventCenter.PostEvent(Game_Event.FragStanding);
            // EventSystem.Instance.Publish(_fragHore.DomainScene(), new EventType.FrogEnterStanding() { unitId = _fragHore.unitId });
            // EventSystem.Instance.Publish(_fragHore.DomainScene(), new EventType.ChangeFrogState() { unitId = _fragHore.unitId , state = FrogState.Standing});
            Debug.Log("------------------------FragHore in StandingState~");
        }

        public void Update()
        {

        }

        public void HandleInput()
        {
            // if (_fragHore.IsReady)
            // {
            // if (Input.GetKeyDown(KeyCode.Space))
            // {
            //     _fragHore.SetHeroineState(new ChargeState(_fragHore));
            // }

            // if (Input.GetKeyDown(KeyCode.LeftArrow))
            // {
            //     EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.Left,false);
            //     Debug.Log("left down");
            // }
            // if (Input.GetKeyDown(KeyCode.RightArrow))
            // {
            //     EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.Right,false);
            //     Debug.Log("right down");
            // }
            // }
        
            // AnimatorClipInfo[] info = _fragHore.fragAnim.GetCurrentAnimatorClipInfo(0);
            // Debug.Log("walk state anim "+ info[0].clip.name);
        }
    }

}

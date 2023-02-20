using System.Collections;
using System.Collections.Generic;

using UnityEngine;

namespace ET.Client
{
    [FriendOf(typeof(FrogComponent))]
    public class FallingState : IBaseState
    {
        private FrogComponent _fragHore;

        public FallingState(FrogComponent frag)
        {
            _fragHore = frag;
            _fragHore.fragAnim.SetBool("jump-down",true);
            // frag.se
            Debug.Log("------------------------FragHore in FallingState~!");
        }

        public void Update()
        {
       
        }

        public void HandleInput()
        {
            if (/*_fragHore.isDrop &&*/ _fragHore.isGround)
            {
                Debug.Log("------------------------falling to landing!!!!");
                _fragHore.fragAnim.SetBool("jump-down",false);
                // _fragHore.SetHeroineState(new LandingState(_fragHore));
                EventSystem.Instance.Publish(_fragHore.DomainScene(), new EventType.ChangeFrogState() { Unit = _fragHore.unit , state = FrogState.Landing});

            }
        
            // AnimatorClipInfo[] info = _fragHore.fragAnim.GetCurrentAnimatorClipInfo(0);
            // Debug.Log("walk state anim "+ info[0].clip.name);
        }
    }
}



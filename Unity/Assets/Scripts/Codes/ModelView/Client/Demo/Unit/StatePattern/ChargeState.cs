using UnityEngine;
using System.Collections;
using ET;
using ET.Client;

[FriendOf(typeof(FrogComponent))]
public class ChargeState : IBaseState
{

    private FrogComponent _fragHore;

    // private double _chargeTime = .0f;
    public ChargeState(FrogComponent frag)
    {
        _fragHore = frag;
        //chargeTime = .0f;
        _fragHore.fragAnim.SetBool("standing", false);
        _fragHore.fragAnim.SetTrigger("power");
        Debug.Log("------------------------FragHore in ChargeState~!(��������״̬��)");
    }

    public void Update()
    {
       
    }

    public void HandleInput()
    {
        // _chargeTime += Time.deltaTime;
        // if (_chargeTime > 1)
        // {
        //     _fragHore.SetHeroineState(new JumpingState(_fragHore , 1));
        //     _chargeTime = 0f;
        //     return;
        // }
        // if (Input.GetKeyUp(KeyCode.Space))
        // {
        //     _fragHore.SetHeroineState(new JumpingState(_fragHore , _chargeTime));
        //     _chargeTime = .0f;
        // }
        // AnimatorClipInfo[] info = _fragHore.fragAnim.GetCurrentAnimatorClipInfo(0);
        // Debug.Log("walk state anim "+ info[0].clip.name);
    }
}
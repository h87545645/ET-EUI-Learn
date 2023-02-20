using System;
using UnityEngine;
using System.Collections;
using ET;
using ET.Client;

namespace ET.Client
{
    
[FriendOf(typeof(FrogComponent))]
public class JumpingState : IBaseState
{

    private FrogComponent _fragHore;

    private float _jumpDelay = 0; 
    
    public JumpingState(FrogComponent frag, double chargeTime = double.NaN)
    {
        NumericComponent numer = frag.unit.GetComponent<NumericComponent>();
        if (chargeTime == double.NaN)
        {
            chargeTime = numer.GetAsFloat(NumericType.jumpChargeTime);
        }
        _jumpDelay = 0;
        _fragHore = frag;
        _fragHore.fragAnim.SetTrigger("jump-up");
        _fragHore.fragAnim.SetBool("standing", false);
        _fragHore.heroRigidbody2D.constraints = RigidbodyConstraints2D.None;
        _fragHore.heroRigidbody2D.constraints = RigidbodyConstraints2D.FreezeRotation;
        float chargeValueY =  (float)(numer.GetAsFloat(NumericType.jumpVaryY) * Math.Max(chargeTime - 0.2 , 0) + numer.GetAsFloat(NumericType.jumpStaticY)); 
        float chargeValueX = (float)(numer.GetAsFloat(NumericType.jumpVaryX) * chargeTime)+ numer.GetAsFloat(NumericType.jumpStaticX);
        float yValue = Mathf.Clamp(chargeValueY, 500,1900);
        float xValue = Mathf.Clamp(chargeValueX, 500, 900);
        // chargeValue = Mathf.Clamp(chargeValue, 500,1800);
        //float dir = (float)frag.direction * force;
        Vector2 force = new Vector2((float)frag.lastDirection * xValue , yValue);
        _fragHore.heroRigidbody2D.AddForce(force);
        if (chargeValueY < 700)
        {
            _fragHore.fragAnim.speed = 1.9f;
        }
        else
        {
            _fragHore.fragAnim.speed = 1.3f;
        }
        //_fragHore.heroRigidbody2D.AddForce(frag.direction == Game_Direction.Left ? Vector2.left * chargeVaule :  Vector2.right * chargeVaule);
        //_fragHore.heroRigidbody2D.velocity = force;
        Debug.Log("------------------------Heroine in JumpingState~!(������Ծ״̬��)");
    }

    public void Update()
    {

    }

    public void HandleInput()
    {
        _jumpDelay += Time.deltaTime;
        if (_jumpDelay > 0.1)
        {
            if(_fragHore.isDrop)
            {
                // Debug.Log("jump-down bool ");
            
                // _fragHore.SetHeroineState(new FallingState(_fragHore));
                EventSystem.Instance.Publish(_fragHore.DomainScene(), new EventType.ChangeFrogState() { Unit = _fragHore.unit , state = FrogState.Falling});
            }else if (_fragHore.isGround)
            {
                // _fragHore.SetHeroineState(new FallingState(_fragHore));
                EventSystem.Instance.Publish(_fragHore.DomainScene(), new EventType.ChangeFrogState() { Unit = _fragHore.unit , state = FrogState.Falling});
            }
        }
       
  
        // AnimatorClipInfo[] info = _fragHore.fragAnim.GetCurrentAnimatorClipInfo(0);
        // Debug.Log("walk state anim "+ info[0].clip.name);
    }
}
}

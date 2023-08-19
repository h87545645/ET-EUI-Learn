using System;
using UnityEngine;
using System.Collections;
using ET;
using ET.Client;
using UnityEngine.Tilemaps;
[FriendOf(typeof(FrogComponent))]
public class LandingState : IBaseState
{
    private FrogComponent _fragHore;
    public LandingState(FrogComponent frag)
    {
        _fragHore = frag;
        _fragHore.fragAnim.SetBool("jump-down",false);
        _fragHore.fragAnim.SetTrigger("landing");
        _fragHore.fragAnim.SetBool("walk", false);
        _fragHore.heroRigidbody2D.constraints = RigidbodyConstraints2D.FreezePositionX;
        _fragHore.heroRigidbody2D.constraints = RigidbodyConstraints2D.FreezeRotation;
        EventSystem.Instance.PublishAsync(Root.Instance.Scene, new ET.EventType.FrogLanded(){unitId = frag.unitId});
        Debug.Log("------------------------FragHore in LandingState~!");
        AudioPlayManager.instance.PlayOnceAudio("frog_land");
    }

    public void Update()
    {

    }

    public void HandleInput()
    {
        // AnimatorClipInfo[] info = _fragHore.fragAnim.GetCurrentAnimatorClipInfo(0);
        // Debug.Log("walk state anim "+ info[0].clip.name);
    }
}

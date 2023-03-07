using System;
using System.Collections;
using System.Collections.Generic;
using ET;
using UnityEngine;


public class FragGameCameraCtrl : MonoBehaviour
{

    public double screenHeight = 14;

    public MonoBridge Bridge;

    [HideInInspector] public int currentCameraIndex = 0;

    public bool enable = true;

    private void Start()
    {
        this.OnBecameInvisible();
    }

    private void OnEnable()
    {
        
    }

    private void OnBecameVisible()
    {
       
        // print("�������Ұ��");
    }
 
    private void OnBecameInvisible()
    {
        if (!enable)
        {
            return;
        }

        if (Bridge.BelongToUnitId == null || Bridge.BelongToUnitId == 0)
        {
            enable = false;
            return;
        }
        // print("���������Ұ��");
        currentCameraIndex = (int)Math.Floor((transform.position.y + screenHeight*0.5) / screenHeight);
        currentCameraIndex = Math.Max(currentCameraIndex, 0);
        if (Camera.main != null)
        {
            Camera.main.transform.position = new Vector3(0,(float)(currentCameraIndex * screenHeight),-10);
            EventSystem.Instance.Publish(Root.Instance.Scene, new FrogGameCameraChange(){Index = this.currentCameraIndex , UnitId = Bridge.BelongToUnitId});
            // EventCenter.PostEvent(Game_Event.FragGameCameraMove,currentCameraIndex);
        }
    }
}

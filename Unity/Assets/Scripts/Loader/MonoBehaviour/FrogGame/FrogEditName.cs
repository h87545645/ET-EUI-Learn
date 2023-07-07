using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
    public class FrogEditName : MonoBehaviour
    {
        public InputField PlayNameInput;

        public void OnEditName(string text)
        {
            if (text == this.PlayNameInput.text)
            {
                return;
            }
            EventSystem.Instance.Publish(Root.Instance.Scene, new ET.EventType.PlayerEditName(){Name = text});
        }
    }
}

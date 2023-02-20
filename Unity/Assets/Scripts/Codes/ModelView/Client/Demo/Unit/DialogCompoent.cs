using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.PlayerLoop;

namespace ET.Client
{
    [ComponentOf(typeof(Dialog))]
    public class DialogCompoent : Entity,IAwake,IUpdate
    {
        public GameObject dialogGo;
        public Transform dialoImage;
        public TextMeshProUGUI text;
        
        public bool _isDialogShowing = false; 
        public Queue<string> _sentenceQueue = new Queue<string>();
        public string _currentSentence = string.Empty;
        public float _curInterval = 0;
        public float DialogInterval = 100;
        public float _curSentenceCnt = 0;
        public Vector3 _originScale = new Vector3(1, 1, 1);
        public float speed = 1;
        // public float DialogSpeed = 1;
        
        public bool isSpeaking = false;
    }
}


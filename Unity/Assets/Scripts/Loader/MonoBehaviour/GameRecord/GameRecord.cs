using System.Collections;
using System.Collections.Generic;
using ET;
using UnityEngine;

namespace ET
{
    public class GameRecord : Singleton<GameRecord>
{
    // public PlayerRecord reocrd;
    //
    // public HistoryRecord history;

    public LoginRecord Login;

    public GameRecord()
    {
        string recordStr = RecordUtil.Get("GameRecord");
        
        if (recordStr != "")
        {
            LoginRecord loginRecord = JsonUtility.FromJson<LoginRecord>(RecordUtil.Get("GameRecord"));
            Login = loginRecord;
        }
        else
        {
            Login = new LoginRecord();
        }
        
        // if (recordStr != "")
        // {
        //     PlayerRecord record = JsonUtility.FromJson<PlayerRecord>(RecordUtil.Get("FragGameRecord"));
        //     reocrd = record;
        // }
        // else
        // {
        //     reocrd = new PlayerRecord();
        // }
        //
        // string historyStr = RecordUtil.Get("FragHistoryRecord");
        // if (historyStr != "")
        // {
        //     HistoryRecord hisRecord = JsonUtility.FromJson<HistoryRecord>(RecordUtil.Get("FragHistoryRecord"));
        //     history = hisRecord;
        // }
        // else
        // {
        //     history = new HistoryRecord();
        // }
    }

    public void SaveLoginData(string account , string pw)
    {
        this.Login.account = account;
        this.Login.password = pw;
        RecordUtil.Set("GameRecord",JsonUtility.ToJson(Login));
    }
  
    
    
    [System.Serializable]
    public class LoginRecord
    {
        public string account = "";
        public string password = "";
    }
    
    // [System.Serializable]
    // public class PlayerRecord
    // {
    //     public Vector2 playerPosition = new Vector2(0,0);
    //     public float playerTotalTime = 0;
    //     public bool playerAlreadyGuide = false;
    //     public float heightRecord = 0;
    //     public int jumpCnt = 0;
    //     public bool isCompleted = false;
    // }
    //
    // [System.Serializable]
    // public class HistoryRecord
    // {
    //     public float playerTotalTime = 0;
    //     public int jumpCnt = 0;
    // }
}
}

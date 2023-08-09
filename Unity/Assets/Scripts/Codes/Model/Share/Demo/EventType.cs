﻿namespace ET
{
    namespace EventType
    {
        public struct SceneChangeStart
        {
        }
        
        public struct SceneChangeFinish
        {
        }
        
        public struct AfterCreateClientScene
        {
        }
        
        public struct AfterCreateCurrentScene
        {
        }
        
        public struct GameOverPopRecord
        {
            public M2C_FrogGameOver msg;
        }
        
        public struct BackToLobbyScene
        {
        }

        public struct AppStartInitFinish
        {
        }

        public struct LoginFinish
        {
        }

        public struct EnterMapFinish
        {
        }

        public struct AfterUnitCreate
        {
            public Unit Unit;
        }
        
        public struct SingleSceneMark
        {
           
        }
        
        public struct AlertError
        {
            public string Info;
        }
        
        // public struct FrogCameraMove
        // {
        //     public int Index;
        // }
        
        // public struct FrogGameFinished
        // {
        //
        // }
        
        public struct FrogPelicanFlyToPlayer
        {
        }
        
        public struct LobbyStartMatching
        {
        }
        public struct LobbyShowMatchingCancelBtn
        {
        }
        public struct LobbyHideMatching
        {
        }
    }
}
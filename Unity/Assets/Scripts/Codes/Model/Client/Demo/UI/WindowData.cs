using System.Collections.Generic;

namespace ET.Client
{
    public class WindowData: Entity , IAwake
    {
        public string Message;

        public M2C_FrogGameOver GameOverData;

        public List<ET.GamePlayerInfo> Ranks;
    }
}
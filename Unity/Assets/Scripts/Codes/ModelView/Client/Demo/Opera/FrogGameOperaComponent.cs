namespace ET.Client
{
    [ComponentOf(typeof(Scene))]
    public class FrogGameOperaComponent: Entity, IAwake, IUpdate
    {
        // public FragMoveButtonCtrl left;
        //
        // public FragMoveButtonCtrl right;

        public bool inputEnable = false;
        
        public float _lastTime = 0;

        public bool _onPointerDownStart = false;
    }
}


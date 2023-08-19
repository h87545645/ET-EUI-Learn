namespace ET
{
    public class UnitEnableCamera: AEvent<ET.EventType.FrogEnableCamera> 
    {
        // public FragGameCameraCtrl = null;
        protected override async ETTask Run(Scene scene, ET.EventType.FrogEnableCamera args)
        {
            // args.go.GetComponent<FragGameCameraCtrl>().enabled = args.enable;
            // args.go.AddComponent<FragGameCameraCtrl>();
            await ETTask.CompletedTask;
        }  
    }
}


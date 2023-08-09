//
//
//
//
// namespace ET.Client
// {
//     [FriendOf(typeof(FrogGameComponent))]
//     [Event(SceneType.Current)]
//     public class SingleScene_Mark : AEvent<EventType.SingleSceneMark>
//     {
//         protected override async ETTask Run(Scene scene, EventType.SingleSceneMark args)
//         {
//             scene.GetComponent<FrogGameComponent>().isSinglePlay = true;
//             await ETTask.CompletedTask;
//         }
//     }
// }

namespace ET
{
	[FriendClass(typeof(WindowCoreData))]
	[FriendClass(typeof(UIBaseWindow))]
	[AUIEvent(WindowID.WindowID_TipsAlert)]
	public  class DlgTipsAlertEventHandler : IAUIEventHandler
	{

		public void OnInitWindowCoreData(UIBaseWindow uiBaseWindow)
		{
		  uiBaseWindow.WindowData.windowType = UIWindowType.PopUp; 
		}

		public void OnInitComponent(UIBaseWindow uiBaseWindow)
		{
		  uiBaseWindow.AddComponent<DlgTipsAlertViewComponent>(); 
		  uiBaseWindow.AddComponent<DlgTipsAlert>(); 
		}

		public void OnRegisterUIEvent(UIBaseWindow uiBaseWindow)
		{
		  uiBaseWindow.GetComponent<DlgTipsAlert>().RegisterUIEvent(); 
		}

		public void OnShowWindow(UIBaseWindow uiBaseWindow, Entity contextData = null)
		{
		  uiBaseWindow.GetComponent<DlgTipsAlert>().ShowWindow(contextData); 
		}

		public void OnHideWindow(UIBaseWindow uiBaseWindow)
		{
		}

		public void BeforeUnload(UIBaseWindow uiBaseWindow)
		{
		}

	}
}

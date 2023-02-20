namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgTipsAlert :Entity,IAwake,IUILogic
	{

		public DlgTipsAlertViewComponent View { get => this.GetComponent<DlgTipsAlertViewComponent>();} 

		 

	}
}

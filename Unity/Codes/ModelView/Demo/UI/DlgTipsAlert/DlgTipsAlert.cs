namespace ET
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgTipsAlert :Entity,IAwake,IUILogic
	{

		public DlgTipsAlertViewComponent View { get => this.Parent.GetComponent<DlgTipsAlertViewComponent>();} 

		 

	}
}

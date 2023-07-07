using TMPro;
using UnityEngine.UI;

namespace ET.Client
{
	 [ComponentOf(typeof(UIBaseWindow))]
	public  class DlgLobby :Entity,IAwake,IUILogic
	{

		public DlgLobbyViewComponent View { get => this.GetComponent<DlgLobbyViewComponent>();}

		public TMP_InputField PlayNameInput;

	}
}


using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace ET
{
    public class ScrollRocker : ScrollRect , IPointerDownHandler 
    {
        
        // public EventTrigger eventTrigger;
        protected float mRadius = 0f;
        private int _lastDir = 0;
        private Vector2 inputVector = Vector2.zero;

        
        
        // Start is called before the first frame update
        protected override void Start()
        {
            base.Start();
            mRadius = (transform as RectTransform).sizeDelta.x * 0.15f;
            // EventManger
        }

        public override void OnDrag(PointerEventData eventData)
        {
            base.OnDrag(eventData);
            var contentPostion = this.content.anchoredPosition;
            if (contentPostion.magnitude > mRadius)
            {
                contentPostion = contentPostion.normalized * mRadius;
                SetContentAnchoredPosition(contentPostion);
                int dir = contentPostion.x < 0 ?-1 : 1;
                if (_lastDir != dir)
                {
                    _lastDir = dir;
                    // Mono2ETEventManager.OnScrollRectDir(dir);
                    EventSystem.Instance.Publish(Root.Instance.Scene, new ET.EventType.ScrollRectDirectionEvent(){dir = dir});
                    // DlgFragGameMainUIViewComponent.ScrollRectDirEvent.inv
                    // EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() { Unit = _fragHore.unit , force = false, dir = ET.FrogDirection.None});
                    // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, dir,false);
                    // onDir(_lastDir);
                }
            }
        }
    
        public override void OnEndDrag(PointerEventData eventData)
        {
            base.OnEndDrag(eventData);
            _lastDir = 0;
            // EventCenter.PostEvent<Game_Direction,bool>(Game_Event.FragGameDirection, Game_Direction.None,false);
            // EventSystem.Instance.Publish(self.DomainScene(), new EventType.FrogDirection() { Unit = _fragHore.unit , force = false, dir = ET.FrogDirection.None});
            // Mono2ETEventManager.OnScrollRectDir(0);
            EventSystem.Instance.Publish(Root.Instance.Scene, new ET.EventType.ScrollRectDirectionEvent(){dir = 0});
        }

        public void resetDir()
        {
            _lastDir = 0;
        }



        public void OnPointerDown(PointerEventData eventData)
        {

            return;
            Vector2 pos;
            RectTransform background = this.content.parent.GetComponent<RectTransform>();
            if(RectTransformUtility.ScreenPointToLocalPointInRectangle(background, eventData.position, eventData.pressEventCamera, out pos))
            {
                pos.x = pos.x / background.sizeDelta.x;
                pos.y = pos.y / background.sizeDelta.y;
                inputVector = new Vector2(pos.x * 2 , pos.y * 2 );
                inputVector = (inputVector.magnitude > 1.0f) ? inputVector.normalized : inputVector;
                this.content.anchoredPosition = new Vector2(inputVector.x * mRadius, inputVector.y * mRadius);
            }
            print(inputVector);
        }


    }
}


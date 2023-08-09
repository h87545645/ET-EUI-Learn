using ET;
using UnityEngine;
using UnityEngine.EventSystems;
using EventSystem = UnityEngine.EventSystems.EventSystem;

namespace ET
{
    public class JoystickController : MonoBehaviour, IDragHandler, IPointerUpHandler, IPointerDownHandler
{
    [SerializeField] private RectTransform background;
    private RectTransform thumb;
    private Vector2 inputVector = Vector2.zero;

    private float radius;
    
    private int lastDir = 0;

    private void Start()
    {
        thumb = GetComponent<RectTransform>();
        radius = background.sizeDelta.x * 0.5f;
    }

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 pos;
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(background, eventData.position, eventData.pressEventCamera, out pos))
        {
            pos.x = pos.x / background.sizeDelta.x;
            pos.y = pos.y / background.sizeDelta.y;
            inputVector = new Vector2(pos.x * 2 , pos.y * 2 );
            inputVector = (inputVector.magnitude > 1.0f) ? inputVector.normalized : inputVector;
            thumb.anchoredPosition = new Vector2(inputVector.x * radius, inputVector.y * radius);
            var contentPostion = thumb.anchoredPosition;
            if (contentPostion.magnitude > radius * 0.1)
            {
                contentPostion = contentPostion.normalized * radius;
                int dir = contentPostion.x < 0 ?-1 : 1;
                if (lastDir != dir)
                {
                    lastDir = dir;
                    EventSystem.Instance.Publish(Root.Instance.Scene, new ET.EventType.ScrollRectDirectionEvent(){dir = dir});
                }
            }
            
        }
        // print(inputVector);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        inputVector = Vector2.zero;
        thumb.anchoredPosition = Vector2.zero;
        lastDir = 0;
        EventSystem.Instance.Publish(Root.Instance.Scene, new ET.EventType.ScrollRectDirectionEvent(){dir = 0});
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        OnDrag(eventData);
    }

    public float Horizontal()
    {
        if(inputVector.x != 0)
        {
            return inputVector.x;
        }
        else
        {
            return Input.GetAxis("Horizontal");
        }
    }

    public float Vertical()
    {
        if(inputVector.y != 0)
        {
            return inputVector.y;
        }
        else
        {
            return Input.GetAxis("Vertical");
        }
    }
}
}


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using TMPro;

public class Main_Input_Controller : MonoBehaviour
{
    [Header("UI Objects")]
    public TextMeshProUGUI Start_Tip_Text;
    public GameObject Direct_Get_Button;

    // Input System
    private PlayerInput playerInput;
    private Player_Input_Actions Main_Input;

    // FSM
    private string Main_UI_FSM = "IDLE";

    private void Awake()
    {
        // create input system
        playerInput = GetComponent<PlayerInput>();
       Main_Input = new Player_Input_Actions();

        // enable default map
        Main_Input.Main_UI.Enable();
        Main_Input.Main_UI.First_Touch.performed += Input_First_Touch;
        Main_Input.Main_UI.Back.performed += Input_Back;
    }

    // Input Actions
    public void Input_First_Touch(InputAction.CallbackContext context)
    {
        //Debug.Log(context);
        if (context.performed && Main_UI_FSM == "IDLE")
        {
            Main_UI_FSM = "SELECT";
            Invisible_Tip_Text();
            Show_Select_Button();
            //Debug.Log("First_Touch!" + context.phase);
            //Main_Input.Main_UI.Disable();
        }
    }

    public void Input_Back(InputAction.CallbackContext context)
    {
        if (context.performed && Main_UI_FSM == "SELECT")
        {
            Main_UI_FSM = "IDLE";
            Show_Tip_Text();
            Invisible_Select_Button();
        }
    }

    // Processing Function
    void Invisible_Tip_Text()
    {
        Start_Tip_Text.gameObject.SetActive(false);
        //Start_Tip_Text.DOFade(0, 0.8f)
        //.OnComplete(() => touchPromptText.gameObject.SetActive(false));
    }

    void Show_Select_Button()
    {
        Direct_Get_Button.SetActive(true);

        // 按钮动画（可选）
        //LeanTween.scale(newGameButton, Vector3.one * 1.1f, 0.3f).setEasePunch();
        //LeanTween.scale(continueButton, Vector3.one * 1.1f, 0.3f).setDelay(0.1f).setEasePunch();
    }

    void Show_Tip_Text()
    {
        Start_Tip_Text.gameObject.SetActive(true);
    }

    void Invisible_Select_Button()
    {
        Direct_Get_Button.SetActive(false);
    }
}

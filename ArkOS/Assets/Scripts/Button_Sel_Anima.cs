using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button_Sel_Anima : MonoBehaviour
{
    public float rotationSpeed = 90f; // 旋转速度（度/秒）
    public float rotationDirection = 1f;
    private float currentRotation = 0f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Main_Input_Controller.Main_UI_FSM == "SELECT")
        {
            currentRotation += rotationSpeed * Time.deltaTime * rotationDirection;
            transform.rotation = Quaternion.Euler(0f, 0f, currentRotation);
        }
    }
}

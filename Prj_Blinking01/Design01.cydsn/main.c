/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
     
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
        
    for(;;)
    {
        /* 2016.06.03 An He Lab01*/

        Pin_LED_Red_Write(~Pin_LED_Red_Read());  // Pin_LED_Red is the name of pin
        CyDelay(1000);

        Pin_LED_Blue_Write(~Pin_LED_Blue_Read());  // Pin_LED_Blue is the name of pin
        CyDelay(1000);
        
        Pin_LED_Green_Write(~Pin_LED_Green_Read());  // Pin_LED_Green is the name of pin
        CyDelay(1000);
        
        // Show White
        Pin_LED_Red_Write(255);  
        Pin_LED_Green_Write(255);  
        Pin_LED_Blue_Write(255);  
        CyDelay(1000);
        // Close LED
        Pin_LED_Red_Write(0);  
        Pin_LED_Green_Write(0);  
        Pin_LED_Blue_Write(0); 
        CyDelay(1000);
        //
    }
}

/* [] END OF FILE */

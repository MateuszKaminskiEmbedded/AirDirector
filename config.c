#include <proc/p32mx564f064h.h>
#include "config.h"

//context variables;

//doda? pocz?tkow? konfiguracje
void pinConfig(void)
{
    /* STAT_LED_1 and STAT_LED_2 pins config */
    TRISDbits.TRISD1 = DIGITAL_OUTPUT;  // set LED1 as digital output
    TRISDbits.TRISD2 = DIGITAL_OUTPUT;  // set LED2 as digital output
    STAT_LED_1 = DIGITAL_LOW;
    STAT_LED_2 = DIGITAL_LOW;
    
    /* UART LOG pins config */
    LATBbits.LATB14 = DIGITAL_OUTPUT;    // UART TX
    LATBbits.LATB8 = DIGITAL_INPUT;      // UART RX
    
    /* General I/O config */
    //set all pins as digital output with value 0
    
    
}
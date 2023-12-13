#ifndef _TYPES_H    /* Guard against multiple inclusion */
#define _TYPES_H

#include <stdio.h>

/*******************************************************************************
 *Microcontroller general defines
 ******************************************************************************/
#define SYS_FREQ 80000000 // Running at 80MHz
#define DIGITAL_INPUT   1
#define DIGITAL_OUTPUT  0
#define DIGITAL_LOW     0
#define DIGITAL_HIGH    1

/*******************************************************************************
 * LOG convention
 * Data log are send by UART. 
 * EXAMPLE: DEBUG_LOG("nameOfFunction(): data", optional variables);
 ******************************************************************************/
#define DEBUG_LOG printf
#define INFO_LOG  printf
#define ERROR_LOG printf

/*******************************************************************************
 * Peripherials configuration
 ******************************************************************************/

/* UART */
#define UART_BAUDRATE 460800

/* LEDs */
#define STAT_LED_1 LATDbits.LATD1
#define STAT_LED_2 LATDbits.LATD2

/* General I/O */
#define RD3
#define RD4
#define RD5
#define RD6
#define RD7
#define RE0
#define RE1
#define RE2
#define RE3
#define RE4

void pinConfig(void);

#endif /* _TYPES_H */
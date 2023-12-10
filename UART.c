#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "UART.h"
#include "types.h"

void UART_Init(void){
    U5MODE           = 0;                    // Set UART 1 off prior to setting it up
    U5MODEbits.BRGH  = 0;                    // High Baud Rate Enable bit. 0 = Standard Speed Mode - 16x baud clock enables
    U5BRG = SYS_FREQ / (16 * 460800) - 1;    // Baud Rate (datasheet) 921600
    U5STA            = 0;                    // Disable the TX and RX pins, clear all flags
    U5STAbits.UTXEN  = 1;                    // UART1 transmitter is enabled
    U5STAbits.URXEN  = 1;                    // UART1 receiver is enabled
    U5MODEbits.PDSEL = 0;                    // Parity and Data Selection bits. 0 = 8-bit data, no parity
    U5MODEbits.STSEL = 0;                    // Stop Selection bit. 0 = one Stop bit
    U5MODEbits.ON    = 1;                    // Turn on the UART 5 peripheral
}

void _mon_putc (char c){
   while (U5STAbits.UTXBF);
   U5TXREG = c;
}
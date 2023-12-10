#include "delay.h"
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

void delay_ms(unsigned long delay)
{
    register unsigned int startCntms = _CP0_GET_COUNT();
    register unsigned int waitCntms = delay * ms_SCALE;

    while(_CP0_GET_COUNT() - startCntms < waitCntms );
}


void delay_us(unsigned long delay)
{
    register unsigned int startCnt = _CP0_GET_COUNT();
    register unsigned int waitCnt = delay * us_SCALE;

    while(_CP0_GET_COUNT() - startCnt < waitCnt );
}
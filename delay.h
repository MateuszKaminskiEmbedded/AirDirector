#ifndef _DELAY_H    /* Guard against multiple inclusion */
#define _DELAY_H

#include "main.h"

#define us_SCALE   (SYS_FREQ/2000000)
#define ms_SCALE   (SYS_FREQ/2000)

void delay_ms(unsigned long delay);
void delay_us(unsigned long delay);

#endif /* _DELAY_H */
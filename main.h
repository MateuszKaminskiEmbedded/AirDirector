/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    main.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _MAIN_H    /* Guard against multiple inclusion */
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "types.h"
#include "delay.h"

#define SYS_FREQ 80000000 // Running at 80MHz
#define LED_1 LATDbits.LATD1
#define LED_2 LATDbits.LATD2

#endif /* _MAIN_H */

/* *****************************************************************************
 End of File
 */

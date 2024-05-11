#ifndef __MY_STM32F4_SYSTICK_LIB
#define __MY_STM32F4_SYSTICK_LIB

#include "stm32f4_systick_driver.h"

void LIB_SYSTICK_DELAY(uint32_t sec);
void LIB_SYSTICK_Delay_Ms(uint32_t milli);

#endif
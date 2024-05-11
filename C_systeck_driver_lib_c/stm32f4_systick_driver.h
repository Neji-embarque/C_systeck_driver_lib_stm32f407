#ifndef __MYSTM32F4_SYSTICK_DRIVER_H
#define __MYSTM32F4_SYSTICK_DRIVER_H

#include <stdint.h>

#define __IOM volatile  /*red/whrite structure member permission*/
#define __OM volatile  /*whrite only structure member permission*/
#define __IM volatile  /*red only structure member permission*/


#define   SCB_BASE          (0xE000E000UL) /*system control base adress*/

#define   SysTick_Offset    0x010UL 
#define   SysTick_BASE      (SCB_BASE + SysTick_Offset)


typedef struct {
	
	__IOM uint32_t  CTRL;	  
	__IOM uint32_t  LOAD;
  __IOM uint32_t  VAL;
  __IM  uint32_t  CALIB;
	
}SysTick_Type;

#define SysTeck    ((SysTick_Type *) SysTick_BASE)  /*systick configurztion structure*/

#endif

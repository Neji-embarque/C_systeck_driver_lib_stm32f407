#include "my_stm32f4_systick_lib.h"



void LIB_SYSTICK_DELAY(uint32_t sec){
	
	int i;
	
		/*configure systeck*/
	SysTeck->LOAD = 16000000 -1; //load 1 sec
	SysTeck->VAL = 0; //clear current value register
	SysTeck->CTRL = 5; // enable systick , no interrupt
	
	for(i=0;i<sec;i++){
		
		while((SysTeck->CTRL & 0x10000) == 0){} //wait untel countflag is set
		}
	SysTeck->CTRL = 0; ///stop the timer (en = 0)
}
	
void LIB_SYSTICK_Delay_Ms(uint32_t milli){

int i;
	
		/*configure systeck*/
	SysTeck->LOAD = 16000 -1; //load 1 sec
	SysTeck->VAL = 0; //clear current value register
	SysTeck->CTRL = 5; // enable systick , no interrupt
	
	for(i=0;i<milli;i++){
		
		while((SysTeck->CTRL & 0x10000) == 0){} //wait untel countflag is set
		}
	SysTeck->CTRL = 0; ///stop the timer (en = 0)
}
	

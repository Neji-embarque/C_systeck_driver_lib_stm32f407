#include "my_stm32f4_gpio_lib.h"                 
#include "my_stm32f4_systick_lib.h" 


GPIO_InitTypeDef myGPIO_InitStruct_1;
GPIO_InitTypeDef myGPIO_InitStruct_2;

int main(void){
	
  __LIB_RCC_GPIOD_CLK_ENABLE();
	
	myGPIO_InitStruct_1.Mode = GPIO_MODE_OUTPUT_PP;
	myGPIO_InitStruct_1.Pin = GPIO_PIN_12;
	myGPIO_InitStruct_1.Pull = GPIO_NOPULL;
	
	myGPIO_InitStruct_2.Mode = GPIO_MODE_OUTPUT_PP;
	myGPIO_InitStruct_2.Pin = GPIO_PIN_14;
	myGPIO_InitStruct_2.Pull = GPIO_NOPULL;
	
	LIB_GPIO_Init(GPIOD,&myGPIO_InitStruct_1);
	LIB_GPIO_Init(GPIOD,&myGPIO_InitStruct_2);

	
	while(1){
		
			LIB_SYSTICK_Delay_Ms(500);
			LIB_GPIO_TogglePin(GPIOD,GPIO_PIN_12);
		  LIB_SYSTICK_DELAY(1);
	  	LIB_GPIO_TogglePin(GPIOD,GPIO_PIN_14);

	}
}

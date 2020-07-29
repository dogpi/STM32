#include "stm32f10x.h"
#include "bsp_led.h"

//void Delay(__IO uint32_t nCount);
void Delay(uint32_t nCount);
int main(void)
{
	LED_GPIO_Config();			// 初始化，点亮
	
	while(1){		
		Delay(0xFFFFF);
		GPIO_ResetBits(LED_G_GPIO_PORT,LED_G_GPIO_PIN);	
		Delay(0xFFFFF);
		GPIO_SetBits(LED_G_GPIO_PORT,LED_G_GPIO_PIN);	
	}
	
    return 0;
}

//void Delay(__IO uint32_t nCount)	 //简单的延时函数
//{
//	for(; nCount != 0; nCount--);
//}

void Delay(uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

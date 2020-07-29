#include "bsp_led.h"

void LED_GPIO_Config(void)
{
	// 设置时钟 RCC
	RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	
	// 设置端口 引脚 输入/输出方式
	GPIO_Init(LED_G_GPIO_PORT,&GPIO_InitStruct);
}

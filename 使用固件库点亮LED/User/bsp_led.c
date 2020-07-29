#include "bsp_led.h"

void LED_GPIO_Config(void)
{
	// ����ʱ�� RCC
	RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK,ENABLE);
	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_PIN;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	
	// ���ö˿� ���� ����/�����ʽ
	GPIO_Init(LED_G_GPIO_PORT,&GPIO_InitStruct);
}

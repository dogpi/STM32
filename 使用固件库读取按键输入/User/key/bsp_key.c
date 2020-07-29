#include "bsp_key.h"


void KEY_GPIO_Config(void)
{
	GPIO_InitTypeDef init;
	// 打开时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	
	// 设置引脚
	init.GPIO_Pin = GPIO_Pin_0;
	// 设置引脚输入/输出模式
	init.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	// 时钟频率
	init.GPIO_Speed = GPIO_Speed_50MHz;
	// GPIO初始化函数
	GPIO_Init(GPIOA,&init);
}	


unsigned char key_scan(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
{
	// 如果引脚的电平为高电平
	if(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin)==1){
		//松手检测
		while(GPIO_ReadInputDataBit(GPIOx,GPIO_Pin)==1);
		return 1;
	}
	else
	{
		return 0;
	}
	
}
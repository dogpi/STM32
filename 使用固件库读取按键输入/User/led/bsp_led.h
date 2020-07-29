#ifndef __BSP_LED_H__
#define __BSP_LED_H__

#include "stm32f10x.h"

#define LED_G_GPIO_PIN		GPIO_Pin_0
#define LED_B_GPIO_PIN		GPIO_Pin_1
#define LED_R_GPIO_PIN		GPIO_Pin_5
#define LED_G_GPIO_PORT		GPIOB
#define LED_G_GPIO_CLK		RCC_APB2Periph_GPIOB

#define LET_G_TOGGLE    {LED_G_GPIO_PORT->ODR ^= LED_G_GPIO_PIN;}

void LED_GPIO_Config(void);



#endif
#ifndef __BSP_KEY_H__
#define __BSP_KEY_H__

#include "stm32f10x.h"

void KEY_GPIO_Config(void);
unsigned char key_scan(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);
#endif
#include "stm32f10x.h"
#include "bsp_key.h"
#include "bsp_led.h"
int main()
{
    LED_GPIO_Config();
	KEY_GPIO_Config();
    while(1){
        if(key_scan(GPIOA,GPIO_Pin_0)==1){
            // 当时写的时候很是疑惑，程序是如何区分GPIO_Pin_0是GPIOA还是GPIOB的引脚的？
            // 实际上 是通过GPIOB->ODR^GPIO_Pin_0来确定是哪个引脚的，并不是GPIOB->ODR = GPIO_Pin_0;
            GPIOB->ODR ^= GPIO_Pin_0;
        }   
    }
    return 0;
}


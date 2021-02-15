#include "stm32f10x.h"

int main(void)
{
	
	*(unsigned int *)0x40021018 |= (1<<3);			// 打开GPIO_B端口的时钟
	*(unsigned int *)0x40010c00 |= (1<<(4*0)); 	// 推挽输出，10MHz  指定位设为1，其它位不变
	*(unsigned int *)0x40010c0c &= ~(1<<0);			// 第0位置0，其它位电平不变。
	
	
}


void SystemInit(void)
{

}

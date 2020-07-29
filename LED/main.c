//#include "stm32f10x.h"

void SystemInit(void);
int main(void)
{
	
	*(unsigned int *)0x40021018 |= 1<<3; 
	*(unsigned int *)0x40010c00 |= 1<<(4*0);
	*(unsigned int *)0x40010c0c &= ~(1<<(4*0));
	
	return 0;
}

void SystemInit(void)
{


}

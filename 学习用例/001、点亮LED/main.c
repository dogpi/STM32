#include "stm32f10x.h"

int main(void)
{
	
	*(unsigned int *)0x40021018 |= (1<<3);			// ��GPIO_B�˿ڵ�ʱ��
	*(unsigned int *)0x40010c00 |= (1<<(4*0)); 	// ���������10MHz  ָ��λ��Ϊ1������λ����
	*(unsigned int *)0x40010c0c &= ~(1<<0);			// ��0λ��0������λ��ƽ���䡣
	
	
}


void SystemInit(void)
{

}

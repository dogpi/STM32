void delay(int x)
{
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			
		}
	}
}
/*
	GPIOA 0x40010800
	����GPIOA PA0 101010101010 �ߵ͵�ƽ����ʱ1s
*/
int main()
{
	// 1����GPIOAʱ�� RCC_APB2ENR
	
	*(unsigned int *)(0x40021000+0x18) |= (1<<2);	
	
	// 2���������ģʽ GPIOA_CRL
		// �������ģʽ��00 10MHZ��01 ===> 0001
		// ����ֵΪ0��λ
	*(unsigned int *)(0x40010800+0x00) &=~(0x0f); // xxxx xxxx xxxx xxxx  xxxx xxxx xxxx 0000
	
		// ����ֵΪ1��λ
	*(unsigned int *)(0x40010800+0x00) |=(0x01);	// xxxx xxxx xxxx xxxx  xxxx xxxx xxxx 0001
	
	// 3���˿�������ݼĴ��� GPIOA_ODR
	while(1)
	{
		*(unsigned int *)(0x40010800+0x0c) = 0x01;
		delay(1500);
		*(unsigned int *)(0x40010800+0x0c) = 0x00;
		delay(1500);
	}
}

void SystemInit()
{

}

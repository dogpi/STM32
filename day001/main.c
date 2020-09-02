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
	设置GPIOA PA0 101010101010 高低电平见延时1s
*/
int main()
{
	// 1、打开GPIOA时钟 RCC_APB2ENR
	
	*(unsigned int *)(0x40021000+0x18) |= (1<<2);	
	
	// 2、配置输出模式 GPIOA_CRL
		// 推挽输出模式：00 10MHZ：01 ===> 0001
		// 设置值为0的位
	*(unsigned int *)(0x40010800+0x00) &=~(0x0f); // xxxx xxxx xxxx xxxx  xxxx xxxx xxxx 0000
	
		// 设置值为1的位
	*(unsigned int *)(0x40010800+0x00) |=(0x01);	// xxxx xxxx xxxx xxxx  xxxx xxxx xxxx 0001
	
	// 3、端口输出数据寄存器 GPIOA_ODR
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

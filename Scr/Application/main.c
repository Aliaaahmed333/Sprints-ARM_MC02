#include "std_Types.h"
#include "GPIO_Dio.h"
#include "GPIOPort.h"
#include "SysTic_Ctrl.h"

int main(void)
{
	
	Port_Init();
	DIO_WriteChannel(Dio_Port_A,Dio_PIN0, STD_high);
	while(1)
	{
		
	}
	
	
	
	
	return 0;
}

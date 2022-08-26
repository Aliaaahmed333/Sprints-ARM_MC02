/***********************************************************************************************
* INCLUDES
***********************************************************************************************/
#include "std_Types.h"
#include "BIT_MATH.h"
#include "GPIO_Dio.h"
#include "GPIOPort.h"
#include "SysTic_Ctrl.h"

volatile void (*ptr)(void) =  NULL;
/********************************************************************************
* LOCAL FUNCTION PROTOTYPES
********************************************************************************/
void BlinkLed (void);
void CallBackFun(void (*ptr_call)(void));

int main(void)
{

	Port_Init();
	CallBackFun(  BlinkLed );
	while(1)
	{
		
	}
	
	return 0;
}

void BlinkLed (void)
{
	DIO_WriteChannel(Dio_Port_A,Dio_PIN0, STD_high);
	SysTic_Start(2);
	DIO_WriteChannel(Dio_Port_A,Dio_PIN0, STD_low);
	SysTic_Start(3);
}
void CallBackFun(void (*ptr_call)(void))
{
	ptr = ptr_call;
}

void SysTick_Handler(void)
{
	(*ptr)();
}

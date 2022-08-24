/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      \file: intCtrl.c
*      \brief
*  
*      \details
*
********************************************************************************/

/********************************************************************************
* INCLUDES
********************************************************************************/
#include "std_Types.h"
#include "intCtrl.h"

/********************************************************************************
* LOCAL MACORS CONSTANT\FUNCTION
********************************************************************************/

/********************************************************************************
* LOCAL DATA
********************************************************************************/

/********************************************************************************
* GLOBAL DATA
********************************************************************************/

/********************************************************************************
* LOCAL FUNCTION PROTOTYPES
********************************************************************************/

/*******************************************************************************
* LOCAL FUNCTIONS 
********************************************************************************/

/********************************************************************************
* GLOBAL FUNCTION 
********************************************************************************/

/*************************************************************************
* \Syntax           : void IntCtrl_Init(void)
* \Description      : initialize NVIC\SCB Module by parsing the configuration
*                      into NVIC\SCB registers
*         
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : None
* \Parameters (out) : None
* \ReturnValue      : None
*************************************************************************/
void IntCtrl_Init(void)
{
	
	NVIC.EN0.B0 = GPIO_PORTA_NVIC;
    NVIC.EN0.B1 = GPIO_PORTB_NVIC;
    NVIC.EN0.B2 = GPIO_PORTC_NVIC;
    NVIC.EN0.B3 = GPIO_PORTD_NVIC;
    NVIC.EN0.B4 = GPIO_PORTE_NVIC;
    NVIC.EN0.B30 = GPIO_PORTF_NVIC;

    NVIC.EN0.B5 = UART0_NVIC;
    NVIC.EN0.B6 = UART1_NVIC;
    NVIC.EN1.B1 = UART2_NVIC;
    NVIC.EN1.B27 = UART3_NVIC;
    NVIC.EN1.B28 = UART4_NVIC;
    NVIC.EN1.B29 = UART5_NVIC;
    NVIC.EN1.B30 = UART6_NVIC;
    NVIC.EN1.B31 = UART7_NVIC;

    NVIC.EN0.B7 =   SPI0_NVIC;
    NVIC.EN1.B2 =   SPI1_NVIC;
    NVIC.EN1.B25 =  SPI2_NVIC;
    NVIC.EN1.B26 =  SPI3_NVIC;

    NVIC.EN0.B8 = I2C0_NVIC;
    NVIC.EN1.B5 = I2C1_NVIC;
    NVIC.EN3.B4 = I2C0_NVIC;
    NVIC.EN4.B5 = I2C0_NVIC;

	/*
	/*ToDo configure Grouping\SubGrouping system in APINT(combination of bits (xxy\xxx\..) register in SCB
	#if (GROUP_PORIORITY ==  8)
	{
		APINT |= 0x05FA|BINARY_POINT_XXX;
		SUB_PORIORITY = 1;
	}
	#elif (GROUP_PORIORITY ==  4)
	{
		APINT |= 0x05FA|BINARY_POINT_XXY;
		SUB_PORIORITY = 2;
	}
	#elif (GROUP_PORIORITY ==  2)
	{
		APINT |= 0x05FA|BINARY_POINT_XYY;
		SUB_PORIORITY = 4;
	}
	#else
	{
		APINT |= 0x05FA|BINARY_POINT_YYY;
		SUB_PORIORITY = 8;
	}
	
	/*ToDo : Assign Group\Subgroup priority in NVIC_PRIx NVIC and SCB_SYSPRIx Registers
	SYSPRI1.B.MEM = BINARY_POINT_XXX;
	SYSPRI1.B.BUS = BINARY_POINT_XXX;
	SYSPRI1.B.USAGE = BINARY_POINT_XXX;
	SYSPRI2.B.SVC = BINARY_POINT_XXX;
	SYSPRI3.B.DEBUG = BINARY_POINT_YYY;
	SYSPRI3.B.PENDSV = BINARY_POINT_XXY;
	SYSPRI3.B.TICK = BINARY_POINT_XXY;
	
	
	/*ToDo : Enable\Disable based on user configurations in NVIC_ENX and SCB_sys Registers*/

    
}

/********************************************************************************
* END OF FILE: int_Ctrl.c
********************************************************************************/

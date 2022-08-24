/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      \file: SysTic.c
*      \brief
*  
*      \details
*
********************************************************************************/

/********************************************************************************
* INCLUDES
********************************************************************************/

#include "std_Types.h"
#include "MCU_HW.h" 
#include "SysTic_Ctrl.h"

void SysTic_Init(uint8 ms)
{
	/* clear sysctrl register */
	STCTRL  = 0;
	/* reload value in STRELOAD  register */
	STRELOAD  = (COUNT_1MSEC * ms) - 1;
	/* clear STCURRENT  register*/
	STCURRENT  = 0;
	
	/*configure sysctrl register (enable systic ,clock ,enable interrupt*/ 
	STCTRL = 7;
	
	
}


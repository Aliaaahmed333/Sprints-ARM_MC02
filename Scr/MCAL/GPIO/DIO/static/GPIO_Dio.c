/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      \file: GPIO_Dio.c
*      \brief: GPIO_Dio.c
*  
*      \details : config function need to use pins and ports to write ,read,flip
*
********************************************************************************/

/***********************************************************************************************
* INCLUDES
***********************************************************************************************/

#include "GPIO_Dio.h"

/********************************************************************************
* GLOBAL FUNCTION implemention
********************************************************************************/

/*************************************************************************
* \Syntax           : STD_levelType DIO_ReadChannnel(Dio_PortType port_id , Dio_ChannelNum channel_n)
* \Description      : read pin in port were detected by user 
*         
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : None
* \Parameters (out) : STD_levelType
* \ReturnValue      : STD_levelType
*************************************************************************/
STD_levelType DIO_ReadChannnel(Dio_PortType port_id , Dio_ChannelNum channel_n)
{
	STD_levelType returnLevel;
	
	switch (port_id)
	{
		case Dio_Port_A: 
			 returnLevel =   GET_BIT(GPIODATA_PORTA  ,channel_n);
		   break;
		case Dio_Port_B: 
			 returnLevel =   GET_BIT(GPIODATA_PORTB  ,channel_n);
		   break;
		
		case Dio_Port_C: 
			 returnLevel =   GET_BIT(GPIODATA_PORTC  ,channel_n);
		   break;
		case Dio_Port_D: 
			 returnLevel =   GET_BIT(GPIODATA_PORTD  ,channel_n);
		   break;
		case Dio_Port_E: 
			if (channel_n != Dio_PIN6 && channel_n != Dio_PIN7)
				{
					returnLevel =   GET_BIT(GPIODATA_PORTE  ,channel_n);
			  }
		   break;
			case Dio_Port_F: 
			if (channel_n != Dio_PIN5 && channel_n != Dio_PIN6 && channel_n != Dio_PIN7)
				{
					returnLevel =   GET_BIT(GPIODATA_PORTE  ,channel_n);
			  }
		   break;
		
		
	}
	return returnLevel;
}

/*************************************************************************
* \Syntax           : void DIO_WriteChannel(Dio_PortType port , Dio_ChannelNum channel_n,STD_levelType level)
* \Description      : write high or low in detected pin in detected port
*         
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : port, channel_n,level
* \Parameters (out) : None
* \ReturnValue      : None
*************************************************************************/

void DIO_WriteChannel(Dio_PortType port , Dio_ChannelNum channel_n,STD_levelType level)
{
	switch (port)
	{
		case Dio_Port_A: 
			if (level ==  STD_low )
			{
				CLR_BIT(GPIODATA_PORTA,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTA,channel_n);
			}
		  break;
			case Dio_Port_B: 
			if (level ==  STD_low )
			{
				CLR_BIT(GPIODATA_PORTA,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTB,channel_n);
			}
		  break;
			case Dio_Port_C: 
			if (level ==  STD_low )
			{
				CLR_BIT(GPIODATA_PORTC,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTC,channel_n);
			}
		  break;
			case Dio_Port_D: 
			if (level ==  STD_low )
			{
				CLR_BIT(GPIODATA_PORTD,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTD,channel_n);
			}
		  break;
			
			case Dio_Port_E: 
			if (level ==  STD_low && channel_n != Dio_PIN6 && channel_n != Dio_PIN7)
			{
				CLR_BIT(GPIODATA_PORTE,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTE,channel_n);
			}
		  break;
			
			case Dio_Port_F: 
			if (level ==  STD_low && channel_n != Dio_PIN5 && channel_n != Dio_PIN6 && channel_n != Dio_PIN7 )
			{
				CLR_BIT(GPIODATA_PORTF,channel_n);
			}
			else
			{
				SET_BIT(GPIODATA_PORTF,channel_n);
			}
		  break;
		
	}
	

}

/*************************************************************************
* \Syntax           : void DIO_FlipChannel (Dio_PortType port , Dio_ChannelNum channel_n)
* \Description      : toggel detected channel in detected port by make it 1 if it 0 
*                     or make it 0 if it 1
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : port , channel_n
* \Parameters (out) : None
* \ReturnValue      : None
*************************************************************************/

void DIO_FlipChannel (Dio_PortType port , Dio_ChannelNum channel_n)
{
	
	
	switch(port)
	{
	
		case Dio_Port_A: 
			 TOG_BIT(GPIODATA_PORTA  ,channel_n);
		   break;
		case Dio_Port_B: 
			 TOG_BIT(GPIODATA_PORTB  ,channel_n);
		   break;
		
		case Dio_Port_C: 
			 TOG_BIT(GPIODATA_PORTC  ,channel_n);
		   break;
		case Dio_Port_D: 
			 TOG_BIT(GPIODATA_PORTD  ,channel_n);
		   break;
		case Dio_Port_E: 
			if (channel_n != Dio_PIN6 && channel_n != Dio_PIN7)
				{
				 TOG_BIT(GPIODATA_PORTE  ,channel_n);
			  }
		   break;
			case Dio_Port_F: 
			if (channel_n != Dio_PIN5 && channel_n != Dio_PIN6 && channel_n != Dio_PIN7)
				{
				  TOG_BIT(GPIODATA_PORTE  ,channel_n);
			  }
		   break;
			}
		
}

/*************************************************************************
* \Syntax           : uint32 DIO_ReadPort(Dio_PortType port)
* \Description      : read detected port and return reading in uint32 
*         
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : port
* \Parameters (out) : uint32
* \ReturnValue      : uint32
*************************************************************************/

uint32 DIO_ReadPort(Dio_PortType port)
{
	uint32 return_value;
	switch (port)
	{
		case Dio_Port_A: 
			return_value = GPIODATA_PORTA;
		  break;
		case Dio_Port_B: 
			return_value = GPIODATA_PORTB;
		  break;
		case Dio_Port_C: 
			return_value = GPIODATA_PORTC;
		  break;
		case Dio_Port_D: 
			return_value = GPIODATA_PORTD;
		  break;
		case Dio_Port_E: 
			return_value = GPIODATA_PORTE;
		  break;
		case Dio_Port_F: 
			return_value = GPIODATA_PORTF;
		  break;
		default : 
			return_value = -2;
		break;
			
	}
	return 	return_value;
	
	
}

/*************************************************************************
* \Syntax           : void DIO_WritePort(Dio_PortType port , uint8 level)
* \Description      : write detected value in detected port 
*         
* \Snync\Async      : Synchronous
* \Reentrancy       : Non Reentrant
* \Parameters (in)  : port,level
* \Parameters (out) : None
* \ReturnValue      : None
*************************************************************************/

void DIO_WritePort(Dio_PortType port , uint8 level)
{
	
	switch (port)
	{
		case Dio_Port_A: 
			 GPIODATA_PORTA = level;
		  break;
		case Dio_Port_B: 
			GPIODATA_PORTB  = level;
		  break;
		case Dio_Port_C: 
		  GPIODATA_PORTC = level;
		  break;
		case Dio_Port_D: 
			GPIODATA_PORTD = level;
		  break;
		case Dio_Port_E: 
			 GPIODATA_PORTE = level;
		  break;
		case Dio_Port_F: 
			 GPIODATA_PORTF = level;
		  break;
		default : 
		break;
		
	}
	
	
	
}
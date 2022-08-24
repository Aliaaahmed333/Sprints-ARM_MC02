
/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      File: GPIO_Dio.h
*      Module: -
*  
*    Describtion: header file for detect prototype of function need
*
********************************************************************************/

#ifndef GPIO_DIO_H
#define GPIO_DIO_H

/********************************************************************************
* INCLUDES
********************************************************************************/
#include "std_Types.h"
#include "DIO_Types.h"

/********************************************************************************
* GLOBAL FUNCTION PROTYPES
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

STD_levelType DIO_ReadChannnel(Dio_PortType port_id , Dio_ChannelNum channel_n);
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

void DIO_WriteChannel(Dio_PortType port , Dio_ChannelNum channel_n,STD_levelType level);

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

void DIO_FlipChannel (Dio_PortType port , Dio_ChannelNum channel_n);
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

uint32 DIO_ReadPort(Dio_PortType port);
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

void DIO_WritePort(Dio_PortType port , uint8 level);






#endif /* GPIO_DIO_H*/

/********************************************************************************
* END OF FILE: GPIO_DIO_H
********************************************************************************/

/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      File: GPIOPort_Types.h
*      Module: -
*  
*    Describtion: header file for detect types of configuration pin need to initializ
*
********************************************************************************/

#ifndef   DIO_TYPES_H
#define   DIO_TYPES_H


typedef enum
{
  
    Dio_PIN0,
	Dio_PIN1,
	Dio_PIN2,
	Dio_PIN3,
	Dio_PIN4,
	Dio_PIN5,
	Dio_PIN6,
	Dio_PIN7

}Dio_ChannelNum;

typedef enum
{
    Dio_Port_A,
    Dio_Port_B,
    Dio_Port_C,
    Dio_Port_D,
    Dio_Port_E,
    Dio_Port_F
}Dio_PortType;



#endif
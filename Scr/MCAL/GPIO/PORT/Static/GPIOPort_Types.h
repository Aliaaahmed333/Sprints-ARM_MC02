/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      File: GPIOPort_Types.h
*      Module: -
*  
*    Describtion: header file for detect types of configuration pin need to initializ
*
********************************************************************************/

#ifndef GPIOPORT_TYPES_H
#define GPIOPORT_TYPES_H

#include "std_Types.h"

typedef enum
{
    Port_Channel_A0,
    Port_Channel_A1,
    Port_Channel_A2,
    Port_Channel_A3,
    Port_Channel_A4,
    Port_Channel_A5,
    Port_Channel_A6,
    Port_Channel_A7,

    Port_Channel_B0,
    Port_Channel_B1,
    Port_Channel_B2,
    Port_Channel_B3,
    Port_Channel_B4,
    Port_Channel_B5,
    Port_Channel_B6,
    Port_Channel_B7,

    Port_Channel_C0,
    Port_Channel_C1,
    Port_Channel_C2,
    Port_Channel_C3,
    Port_Channel_C4,
    Port_Channel_C5,
    Port_Channel_C6,
    Port_Channel_C7,

    Port_Channel_D0,
    Port_Channel_D1,
    Port_Channel_D2,
    Port_Channel_D3,
    Port_Channel_D4,
    Port_Channel_D5,
    Port_Channel_D6,
    Port_Channel_D7,

    Port_Channel_E0,
    Port_Channel_E1,
    Port_Channel_E2,
    Port_Channel_E3,
    Port_Channel_E4,
    Port_Channel_E5,
    Port_Channel_E6_NotExist,
    Port_Channel_E7_NotExist,

    Port_Channel_F0,
    Port_Channel_F1,
    Port_Channel_F2,
    Port_Channel_F3,
    Port_Channel_F4,

    Port_Channel_MaxNum
}Port_ChIdType;

typedef enum
{
    Port_Id_A,
    Port_Id_B,
    Port_Id_C,
    Port_Id_D,
    Port_Id_E,
    Port_Id_F
}Port_IdType;

typedef enum
{
    port_Dir_Input,
    port_Dir_Output
}Port_DirType;

typedef enum
{
    Port_IntDisable,
    Port_IntFallingEdge,
    Port_IntRisingEdge,
    Port_IntBothEdges
}Port_IntCtrType;

typedef enum
{
    PORT_MODE_PIN_X_DIO,
    PORT_MODE_PINUART_Tx,
    PORT_MODE_PINUART_Rx,
    PORT_MODE_PIN_SS0_Clk,
	  PORT_MODE_PIN_SSI0Clk = 3,
  	PORT_MODE_PIN_SSI0Fss ,
    PORT_MODE_PIN_SSI0Rx,
	 PORT_MODE_PIN_SSI2Rx = 5,
	 PORT_MODE_PIN_SSI0Tx,
   PORT_MODE_PIN_SSI2Tx = 6,
   PORT_MODE_PIN_I2C0SCL,
	 PORT_MODE_PIN_I2C1SCL = 6,
   PORT_MODE_PIN_I2C0SDA,
	 PORT_MODE_PIN_I2C1SDA = 7,
   PORT_MODE_PIN_PWM,
   PORT_MODE_PIN_CCP,
   PORT_MODE_PIN_AIN,
   PORT_MODE_PIN_CAN_Rx,
   PORT_MODE_PIN_CAN_Tx
}Port_ModeType;

typedef enum
{
    Port_Unlocked,
    Port_locked
}Port_LockStatusType;


typedef enum
{
    Port_InternalAttach_NA,
    Port_InternalAttach_PullUpRes,
    Port_InternalAttach_PullDownRes,
    Port_InternalAttach_OpenDrain,

}Port_InternalAttachType;

typedef enum
{
    Port_CurrDrive_2mA,
    Port_CurrDrive_4mA,
    Port_CurrDrive_8mA,
}Port_CurrDriveType;


typedef struct
{
    Port_ChIdType           Channel;
    Port_DirType            Dir;
    uint8                   Mode;
    Port_IntCtrType         Interrupt;
    Port_InternalAttachType AttachedRes;
    Port_CurrDriveType      CurrentDrive;
    Port_LockStatusType     LockStatus;
}Port_CfgType;









#endif 
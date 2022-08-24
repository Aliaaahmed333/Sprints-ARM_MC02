/*******************************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      File: GPIOPort_Lcfg.h
*      Module: -
*  
*    Describtion: header file for detect types of configuration pin need to initializ
*
*******************************************************************************************/


#ifndef  GPIOPORT_LCFG_H
#define  GPIOPORT_LCFG_H

#include "std_Types.h"
#include "MCU_HW.h"
#include "GPIOPort_Types.h"


#define   MAX_NUM_OF_CH_IN_PORT      8
#define   PORT_NUM_OF_ACTIVATED_CH   43

Port_CfgType PortCfgArr[PORT_NUM_OF_ACTIVATED_CH] = {
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*    Channel                   Direction                Mode                          External Interrupt      Attached_Resistor                      Current_Drive_Strength      Lock_Status    */
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
{     Port_Channel_A0,          port_Dir_Output,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A1,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A2,          port_Dir_Input,          PORT_MODE_PIN_SSI0Clk,        Port_IntDisable,        Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A3,          port_Dir_Input,          PORT_MODE_PIN_SSI0Fss,        Port_IntDisable,        Port_InternalAttach_PullDownRes,       Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A4,          port_Dir_Input,          PORT_MODE_PIN_SSI0Rx,         Port_IntDisable,        Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A5,          port_Dir_Output,         PORT_MODE_PIN_SSI0Tx,         Port_IntDisable,        Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A6,          port_Dir_Input,          PORT_MODE_PIN_I2C1SCL,        Port_IntDisable,        Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_A7,          port_Dir_Input,          PORT_MODE_PIN_I2C1SDA,        Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },

{     Port_Channel_B0,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,         Port_IntDisable,        Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B1,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,         Port_IntDisable,        Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B2,          port_Dir_Input,          PORT_MODE_PIN_I2C0SCL,       Port_IntDisable,        Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B3,          port_Dir_Input,          PORT_MODE_PIN_I2C0SDA,       Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B4,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,         Port_IntDisable,        Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B5,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,         Port_IntDisable,        Port_InternalAttach_NA       ,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B6,          port_Dir_Input,          PORT_MODE_PIN_SSI2Rx,        Port_IntDisable,        Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_B7,          port_Dir_Output,         PORT_MODE_PIN_SSI2Tx,        Port_IntDisable,        Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },

{     Port_Channel_C0,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C1,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C2,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C3,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C4,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C5,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C6,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_C7,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },

{     Port_Channel_D0,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,             Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D1,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,             Port_InternalAttach_PullDownRes,       Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D2,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,            Port_InternalAttach_PullUpRes,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D3,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,            Port_InternalAttach_NA,                Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D4,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D5,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D6,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_D7,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },

{     Port_Channel_E0,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_E1,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_E2,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_E3,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_E4,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },
{     Port_Channel_E5,          port_Dir_Input,          PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_OpenDrain,         Port_CurrDrive_2mA,         Port_Unlocked     },

{     Port_Channel_F0,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_NA,               Port_CurrDrive_2mA,          Port_Unlocked    },
{     Port_Channel_F1,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_NA,               Port_CurrDrive_2mA,          Port_Unlocked    },
{     Port_Channel_F2,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_NA,               Port_CurrDrive_2mA,          Port_Unlocked    },
{     Port_Channel_F3,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_NA,               Port_CurrDrive_2mA,          Port_Unlocked    },
{     Port_Channel_F4,          port_Dir_Output,         PORT_MODE_PIN_X_DIO,          Port_IntDisable,        Port_InternalAttach_NA,               Port_CurrDrive_2mA,          Port_Unlocked    }

};	
	
	
	
	





#endif 
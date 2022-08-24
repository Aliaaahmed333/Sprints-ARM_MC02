/********************************************************************************
* FILE DESCRIBTION
* -------------------------------------------------------------------------------
*      \file: intCtrl_Cfg.h
*      \brief
*  
*      \details
*
********************************************************************************/

#ifnedf INTCTRL_CFG_H
#define INTCTRL_CFG_H
 

/********************************************************************************
* INCLUDES
********************************************************************************/
#include "

/********************************************************************************
* GLOBAL CONSTANT MACORS 
********************************************************************************/
/*
#define GROUP_PORIORITY     8
#define SUB_PORIORITY       1
#define BINARY_POINT_XXX    0x4
#define BINARY_POINT_XXY    0x5
#define BINARY_POINT_XYY    0x6
#define BINARY_POINT_YYY    0x7 */


#define GPIO_PORTA_NVIC     DISABLE ;
#define GPIO_PORTB_NVIC     DISABLE ;
#define GPIO_PORTC_NVIC     DISABLE ;
#define GPIO_PORTD_NVIC     DISABLE ;
#define GPIO_PORTE_NVIC     DISABLE ;
#define GPIO_PORTF_NVIC     DISABLE ;

#define UART0_NVIC          DISABLE ;
#define UART1_NVIC          DISABLE ;
#define UART2_NVIC          DISABLE ;
#define UART3_NVIC          DISABLE ;
#define UART4_NVIC          DISABLE ;
#define UART5_NVIC          DISABLE ;
#define UART6_NVIC          DISABLE ;
#define UART7_NVIC          DISABLE ;

#define SPI0_NVIC           ENABLE ;
#define SPI1_NVIC           DISABLE ;
#define SPI2_NVIC           DISABLE ;
#define SPI3_NVIC           ENABLE ;

#define I2C0_NVIC           ENABLE ;
#define I2C1_NVIC           ENABLE ;
#define I2C2_NVIC           DISABLE ;
#define I2C3_NVIC           DISABLE ;

#define WATCHDOG_T0_T1      DISABLE ;

/********************************************************************************
* GLOBAL CONSTANT FUNCTION
********************************************************************************/

/********************************************************************************
* GLOBAL DATA TYPES AND STRUCTURES
********************************************************************************/

#endif 

/********************************************************************************
* END OF FILE: int_Ctrl_Cfg.h
********************************************************************************/







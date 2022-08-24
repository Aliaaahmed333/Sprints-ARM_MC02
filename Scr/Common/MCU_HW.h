/***********************************************************************************************
* FILE DESCRIBTION
* ----------------------------------------------------------------------------------------------
*      File:  MCU_HW.h
*      Module: -
*  
*    Describtion: header file for registers definitions
*
***********************************************************************************************/

#ifndef MCU_HW_H
#define MCU_HW_H
 

/***********************************************************************************************
* INCLUDES
***********************************************************************************************/
#include "std_Types.h"
/***********************************************************************************************
* GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************************/
typedef struct
{
	uint32 VECACT    :8;
	uint32           :3;
	uint32 RETBASE   :1;
	uint32 VECPEND   :8;
	uint32           :2;
	uint32 ISRPEND   :1;
	uint32 ISRPRE    :1;
	uint32           :1;
	uint32 PENDSTCLR :1;
	uint32 PENDSTSET :1;
	uint32 UNPENDSV  :1;
	uint32 PENDSV    :1;
	uint32           :2;
	uint32 NMISET    :1; 
    
}INTCTRL_BF;

typedef union
{
	uint32 R;
	INTCTRL_BF B;
	
}INTCTRL_tag;

typedef struct
{
	uint32           :5;
	uint32 MEM       :3;
	uint32           :5;
	uint32 BUS       :3;
	uint32           :5;
	uint32 USAGE     :3;
	uint32           :8;
	
}SYSPRI1_BF;
typedef union
{
	uint32 R;
	SYSPRI1_BF B;
	
}SYSPRI1_tag;

typedef struct
{
	uint32           :5;
	uint32 DEBUG     :3;
	uint32           :13;
	uint32 PENDSV    :3;
	uint32           :5;
	uint32 USAGE     :3;
	
}SYSPRI3_BF;
typedef union
{
	uint32 R;
	SYSPRI3_BF B;
	
}SYSPRI3_tag;


typedef struct
{
    uint32 GPIODATA    ;
    uint32 GPIODIR     ;
    uint32 GPIOIS      ;
    uint32 GPIOIBE     ;
    uint32 GPIOIEV     ;
    uint32 GPIOIM      ;
    uint32 GPIORIS     ;
    uint32 GPIOMIS     ;
    uint32 GPIOICR     ;
    uint32 GPIOAFSEL   ; 
    uint8 Reserved_2[0xDC];
    uint32 GPIODR2R    ; 
    uint32 GPIODR4R    ;
    uint32 GPIODR8R    ;
    uint32 GPIOODR     ;
    uint32 GPIOPUR     ;
    uint32 GPIOPDR     ;
    uint32 GPIOSLR     ;
    uint32 GPIODEN     ;
    uint32 GPIOLOCK    ;
    uint32 GPIOCR      ;
    uint32 GPIOAMSEL   ;
    uint32 GPIOPCTL    ;
    uint32 GPIOADCCTL  ;
    uint32 GPIODMACTL  ;
}PORT_RegType;

#define PORTA_REG     (*((volatile PORT_RegType*)0x400043FC))
#define PORTB_REG     (*((volatile PORT_RegType*)0x400053FC))
#define PORTC_REG     (*((volatile PORT_RegType*)0x400063FC))
#define PORTD_REG     (*((volatile PORT_RegType*)0x400073FC))
#define PORTE_REG     (*((volatile PORT_RegType*)0x400243FC))
#define PORTF_REG     (*((volatile PORT_RegType*)0x400253FC))


/***********************************************************************************************
* GLOBAL CONSTANT MACORS 
***********************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS      0xE000E000
/*  Nested vector interrupt control register */
#define APINT                          *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#define INTCTRL                        *((volatile INTCTRL_tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04))
#define SYSPRI1                        *((volatile SYSPRI1_tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD18))
#define SYSPRI2                        *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD1C))
#define SYSPRI3                        *((volatile SYSPRI3_tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD20))


/* Systm  tick control registers */ 

#define STCTRL                         *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x010))
#define STRELOAD                       *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x014))
#define STCURRENT                      *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS +  0x018))
		
/* register GPIO APB */

#define GPIODATA_PORTA                 *((volatile uint32 *)( 0x40004000))
#define GPIODATA_PORTB                 *((volatile uint32 *)( 0x40005000)) 
#define GPIODATA_PORTC                 *((volatile uint32 *)( 0x40006000)) 
#define GPIODATA_PORTD                 *((volatile uint32 *)( 0x40007000)) 
#define GPIODATA_PORTE                 *((volatile uint32 *)( 0x40024000)) 
#define GPIODATA_PORTF                 *((volatile uint32 *)( 0x40025000)) 

	
#define GPIODIR_PORTA                  *((volatile uint32 *)( 0x40004000 + 0x400)) 
#define GPIODIR_PORTB                  *((volatile uint32 *)( 0x40005000 + 0x400)) 
#define GPIODIR_PORTC                  *((volatile uint32 *)( 0x40006000 + 0x400)) 
#define GPIODIR_PORTD                  *((volatile uint32 *)( 0x40007000 + 0x400)) 
#define GPIODIR_PORTE                  *((volatile uint32 *)( 0x40024000 + 0x400)) 
#define GPIODIR_PORTF                  *((volatile uint32 *)( 0x40025000 + 0x400)) 

#define GPIOAFSEL_PORTA                 *((volatile uint32 *)( 0x40004000 + 0x420)) 
#define GPIOAFSEL_PORTB                 *((volatile uint32 *)( 0x40005000 + 0x420)) 
#define GPIOAFSEL_PORTC                 *((volatile uint32 *)( 0x40006000 + 0x420)) 
#define GPIOAFSEL_PORTD                 *((volatile uint32 *)( 0x40007000 + 0x420)) 
#define GPIOAFSEL_PORTE                 *((volatile uint32 *)( 0x40024000 + 0x420)) 
#define GPIOAFSEL_PORTF                 *((volatile uint32 *)( 0x40025000 + 0x420)) 
	
#define GPIODR2R_PORTA                 *((volatile uint32 *)( 0x40004000 + 0x500)) 
#define GPIODR2R_PORTB                 *((volatile uint32 *)( 0x40005000 + 0x500)) 
#define GPIODR2R_PORTC                 *((volatile uint32 *)( 0x40006000 + 0x500)) 
#define GPIODR2R_PORTD                 *((volatile uint32 *)( 0x40007000 + 0x500)) 
#define GPIODR2R_PORTE                 *((volatile uint32 *)( 0x40024000 + 0x500)) 
#define GPIODR2R_PORTF                 *((volatile uint32 *)( 0x40025000 + 0x500)) 
	

#define GPIODR4R_PORTA                 *((volatile uint32 *)( 0x40004000 + 0x504)) 
#define GPIODR4R_PORTB                 *((volatile uint32 *)( 0x40005000 + 0x504)) 
#define GPIODR4R_PORTC                 *((volatile uint32 *)( 0x40006000 + 0x504)) 
#define GPIODR4R_PORTD                 *((volatile uint32 *)( 0x40007000 + 0x504)) 
#define GPIODR4R_PORTE                 *((volatile uint32 *)( 0x40024000 + 0x504)) 
#define GPIODR4R_PORTF                 *((volatile uint32 *)( 0x40025000 + 0x504)) 
	


		


/***********************************************************************************************
* GLOBAL DATA PROTYPES
***********************************************************************************************/


#endif  /* IMCU_HW_H*/

/***********************************************************************************************
* END OF FILE: Mcu_HW.h
***********************************************************************************************/

 





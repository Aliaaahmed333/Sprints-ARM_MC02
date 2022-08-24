/*
 * BIT_MATH1.h
 *
 * Created: 23/02/2022 02:25:44 م
 *  Author: ALIAA
 */ 


#ifndef BIT_MATH1_H_
#define BIT_MATH1_H_

#include "std_Types.h"

#define  SET_BIT(VAR,BIT)    ((VAR) |=  ((uint32)1 << (BIT)))
#define  CLR_BIT(VAR,BIT)    ((VAR) &= (~((uint32)1 << (BIT))))
#define  TOG_BIT(VAR,BIT)    ((VAR) ^= ((uint32)1  << (BIT)))
#define  GET_BIT(VAR,BIT)    ((VAR) & ((uint32)1 << (BIT)) >> (BIT))




#endif /* BIT_MATH1_H_ */
/**
  ******************************************************************************
  * @file		gpio.c
  * @author	Nguyen Van Quan
  * @date		21 march 2018
  ******************************************************************************
  */
	
#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f10x.h"
	 
/** 
  * @brief  Configuration Digital Pin enumeration  
  */	 
	 
typedef enum { 
	HIGH = 1,
	LOW  = 0
}GPIODigital_TypeDef;

	 
void pinMode(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOMode_TypeDef GPIO_Mode);
void digitalWrite(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIODigital_TypeDef GPIODigital);
GPIODigital_TypeDef digitalRead(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

#ifdef __cplusplus
}
#endif

#endif

/********************************* END OF FILE ********************************/
/******************************************************************************/

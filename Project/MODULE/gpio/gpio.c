/**
  ******************************************************************************
  * @file		gpio.c
  * @author	Nguyen Van Quan
  * @date		21 march 2018
  ******************************************************************************
  */
	
#include "gpio.h"


void pinMode(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOMode_TypeDef GPIO_Mode) {
	GPIO_InitTypeDef GPIO_InitStruct;
	uint32_t RCC_APB2Periph ;
	if (GPIOx == GPIOA) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOA;
	} else if (GPIOx == GPIOB) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOB;
	} else if (GPIOx == GPIOC) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOC;
	} else if (GPIOx == GPIOD) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOD;
	} else if (GPIOx == GPIOE) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOE;
	} else if (GPIOx == GPIOF) {
		RCC_APB2Periph = RCC_APB2Periph_GPIOF;
	} else {
		RCC_APB2Periph = RCC_APB2Periph_GPIOG;
	}
	RCC_APB2PeriphClockCmd(RCC_APB2Periph, ENABLE);
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode;
	GPIO_Init(GPIOx, &GPIO_InitStruct);
}


void digitalWrite(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIODigital_TypeDef GPIODigital) {
	GPIO_WriteBit(GPIOx, GPIO_Pin, (BitAction)GPIODigital);
}

GPIODigital_TypeDef digitalRead(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin) {
	uint8_t digital = GPIO_ReadInputDataBit(GPIOx, GPIO_Pin);
	if (digital == HIGH) 
		return HIGH;
	return LOW;
}


/********************************* END OF FILE ********************************/
/******************************************************************************/

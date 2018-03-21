#include "stm32f10x.h"                  // Device header
#include "gpio.h"

int main(void) {
  pinMode(GPIOC, GPIO_Pin_13, GPIO_Mode_AF_PP);
	while (1) {
	  digitalWrite(GPIOC, GPIO_Pin_13, HIGH);
		
		
	}
}

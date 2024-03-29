/*
 ============================================================================
 Name        : toggelled.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "platform_types.h"

typedef volatile unsigned	vint32_t;

#define RCC_BASE 	0x40021000
#define GPIO_BASE	0x40010800

#define GPIOA_CRH *((vint32_t*)(GPIO_BASE+0x04))
#define GPIOA_ODR *((vint32_t*)(GPIO_BASE+0x0c))
#define RCC_APB2ENR *((vint32_t*)(RCC_BASE+0x18))

typedef union {
	vint32_t ALLPORTA;
	struct Sbits {
		vint32_t reserved:13;
		vint32_t pin13:1;
	}pin;
}PORTA;

volatile PORTA *PPORTA =(volatile PORTA *)(GPIO_BASE+0x0c);

int main()
{
	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;
	while (1)
	{
		PPORTA->pin.pin13=1;
		for (int i=0;i<5000;i++);
		PPORTA->pin.pin13=0;
		for (int i=0;i<5000;i++);
	}
}

/*
 ============================================================================
 Name        : four.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1,num2;
	printf("enter the two numbers: ");
	fflush(stdout);
	scanf("%f %f",&num1, &num2);
	printf("product: %f", num1*num2);
	return 0;
}

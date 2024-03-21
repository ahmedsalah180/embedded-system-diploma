/*
 ============================================================================
 Name        : three.c
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
	int num1, num2;
	printf("enter the two numbers: ");
	fflush(stdout);
	scanf("%d %d",&num1, &num2);
	printf("sum = %d",num1+num2);
	return 0;
}

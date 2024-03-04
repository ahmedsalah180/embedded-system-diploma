/*
 ============================================================================
 Name        : ex4.c
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
	signed int a;
	printf("enter the number: ");
	fflush(stdout);
	scanf("%d",&a);
	if (a>0)
		printf("the number is positive");
	else if (a<0)
		printf("the number is negative");
	else
		printf("Neither nor");
}

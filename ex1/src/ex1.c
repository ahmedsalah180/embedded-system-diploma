/*
 ============================================================================
 Name        : ex1.c
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
	int x;
	printf("enter the number: ");
	fflush(stdout);
	scanf("%d",&x);
	if (x%2 == 0)
	{
	printf("the number is even");
	}
	else
	printf("the number is odd");
}

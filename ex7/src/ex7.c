/*
 ============================================================================
 Name        : ex7.c
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
	int a;
	int fact = 1;
	printf("enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	if (a>=0)
	{
		for (int x=0; x<a; x++)
		{
			fact = fact*(x + 1);
		}
		printf("factorial = %d",fact);
	}
	else
		printf("no factorial for negative number");
}

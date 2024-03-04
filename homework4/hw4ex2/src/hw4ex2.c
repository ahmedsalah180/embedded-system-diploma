/*
 ============================================================================
 Name        : hw4ex2.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact=1;
int factorial (int x)
{
	if (x==0)
		return fact;
	else
	{
		fact=fact*x;
		x--;
	}
	factorial (x);
}

int main(){
	int x;
	printf("enter the number: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("%d",factorial(x));
}

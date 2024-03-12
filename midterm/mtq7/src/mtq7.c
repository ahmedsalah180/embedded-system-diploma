/*
 ============================================================================
 Name        : mtq7.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sumnum()
{
	static int sum=0,digit=0;
	if (digit<100)
	{
		digit++;
		sum=sum+digit;
		sumnum();
	}
	else
		printf("sum of numbers from 0 to 100 is: %d",sum);
}

int main()
{
	sumnum();
}

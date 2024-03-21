/*
 ============================================================================
 Name        : test.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int digitsum (int x)
{
	static int sum=0;
	int rem;
	if(x!=0)
	{
		rem=x%10;
		sum+=rem;
		digitsum(x/10);
	}
	else
		return 0;
	return sum;
}

int main()
{
	int x =4565;
	printf("the sum of the digits= %d",digitsum(x));
}


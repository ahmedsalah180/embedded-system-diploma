/*
 ============================================================================
 Name        : hw4ex4.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ans =1;

int result (int base,int power)
{
	if (power==0)
		return ans;
	else
	{
	ans*=base;
	power--;
	result(base,power);
	}
}

int main()
{
	int base,power;
	printf("enter base number: ");
	fflush(stdout);
	scanf("%d",&base);
	printf("enter power number: ");
	fflush(stdout);
	scanf("%d",&power);
	printf("the answer = %d",result(base,power));

}

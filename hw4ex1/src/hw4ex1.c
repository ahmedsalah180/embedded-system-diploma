/*
 ============================================================================
 Name        : hw4ex1.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isprime (int num);
{
	for (int i =2; i<num;i++)
	{
		if(num%i=0)
			return 0;
	}
}

void primnumbers (int a,int b);
{

}

int main()
{
	int a,b;
	printf("enter the two numbers (intervals= ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	primnumbers(a,b);
}

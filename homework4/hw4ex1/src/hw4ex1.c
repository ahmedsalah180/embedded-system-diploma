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

int a,b;
int isprime (int num)
{
	if (num==1 || num==0)
		return 0;
	else
	{
		for (int i =2; i<num;i++)
		{
			if(num%i==0)
				return 0;
		}
		return 1;
	}
}

void primnumbers (int a,int b)
{
	printf("prime numbers between %d and %d are: ",a,b);
	for(int i=a;i<=b;i++)
	{
		if (isprime(i)==1)
			printf("%d ",i);
	}
}

int main()
{
	printf("enter the two numbers (intervals)= ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	primnumbers(a,b);
}

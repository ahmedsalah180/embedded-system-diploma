/*
 ============================================================================
 Name        : ex6.c
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
	int sum = 0;
	printf("enter an integer:");
	fflush(stdout);
	scanf("%d",&a);
	for (int x=0; x<a; x++)
	{
		sum = sum + x + 1;
	}
	printf("sum = %d",sum);
}

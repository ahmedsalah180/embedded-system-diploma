/*
 ============================================================================
 Name        : hw3ex2.c
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
	int n;
	int avg[100];
	float sum=0;
	printf("enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter number%d: ",i+1);
		fflush(stdout);
		scanf("%d",&avg[i]);
	}
	for(int i =0;i<n;i++)
	{
		sum+=avg[i];
	}
	printf("Average=%f",sum/n);
}

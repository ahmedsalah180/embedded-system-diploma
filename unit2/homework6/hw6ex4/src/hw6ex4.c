/*
 ============================================================================
 Name        : hw6ex4.c
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
	int arr[15];
	int *ptr;
	printf("enter the number of array's elements(max=15): ");
	fflush(stdout);
	scanf("%d",&n);
	printf("enter the elements of the array:-\n");
	for (int i =0;i<n;i++)
	{
		printf("enter element %d: ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	ptr=&arr[n-1];
	printf("the elements of the array in reverse order are:");
	for (int i=n-1;i>=0;i--)
		printf("\nelement %d: %d",i,*ptr--);
}

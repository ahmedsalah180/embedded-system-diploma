/*
 ============================================================================
 Name        : hw3ex4.c
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
	int n, arr[100], ele, pos;
	printf("enter the number of elements:");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&ele);
	printf("enter the position of the element: ");
	fflush(stdout);
	scanf("%d",&pos);
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
		if (i+1==pos)
		{
			printf("%d\t",ele);
			printf("%d\t",arr[i]);
		}
		else
			printf("%d\t",arr[i]);
	}
}

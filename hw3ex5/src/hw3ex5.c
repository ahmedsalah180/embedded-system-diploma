/*
 ============================================================================
 Name        : hw3ex5.c
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
	int n, arr[100], ele;
	printf("enter the number of elements:");
	fflush(stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		arr[i]=11*(i+1);
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("enter the element to be searched: ");
	fflush(stdout);
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==ele)
			printf("number found at location= %d",i+1);
	}
}

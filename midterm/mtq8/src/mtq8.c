/*
 ============================================================================
 Name        : mtq8.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse (int a[],int size)
{
	static rev[32];
	for(int i=0;i<size;i++)
	{
		rev[i]=a[size-i-1];
		printf("%d ",rev[i]);
	}
}

int main()
{
	int a[5]={1,2,3,4,5};
	reverse(a,5);
}

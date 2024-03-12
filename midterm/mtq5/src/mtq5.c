/*
 ============================================================================
 Name        : mtq5.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int binones (int a)
{
    int onecount = 0;
    int bits = 0;
	for (int i=1;i<=a;i*=2)
		bits++;
	for (int i=bits-1;i>=0;i--)
	{
		if((a&(1<<i))!=0)
			onecount++;
	}
	return onecount;
}

int main()
{
	int a =15;
	printf("the number of ones is %d",binones(a));
}

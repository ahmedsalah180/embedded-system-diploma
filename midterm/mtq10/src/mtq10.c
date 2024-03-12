/*
 ============================================================================
 Name        : mtq10.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int maxones (int a)
{
	int count=0;
	int maxcount=0;
	for(int i=0;i<16;i++)
	{
		if((a&(1<<i))!=0)
			count++;
		else
		{
			if(count>=maxcount)
				maxcount=count;
			count=0;
		}
	}
	return maxcount;
}

int main()
{
	int a = 110;
	printf("maximum no of ones between 2 zeros is = %d",maxones(a));
}

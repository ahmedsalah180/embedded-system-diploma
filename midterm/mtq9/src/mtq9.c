/*
 ============================================================================
 Name        : mtq9.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revwords (char name[],int len)
{
	int spaceindex;
	for (int i=len-1;i>=0;i--)
	{
		if (name[i]==' ')
		{
			spaceindex=i;
			break;
		}
	}
	for (int i=spaceindex+1;i<len;i++)
		printf("%c",name[i]);
	printf(" ");
	for (int i=0;i<spaceindex;i++)
		printf("%c",name[i]);
}

int main()
{
	char name[32]="mohamed gamal";
	int len=strlen(name);
	revwords(name,len);
}

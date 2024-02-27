/*
 ============================================================================
 Name        : hw3ex7.c
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
	char string[32];
	int counter=0;
	printf("enter a string: ");
	fflush(stdout);
	gets(string);
	for(int i=0;i<32;i++)
	{
		if (string[i] == 0)
			break;
		else
			counter++;
	}
	printf("length of string= %d",counter);
}

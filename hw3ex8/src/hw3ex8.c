/*
 ============================================================================
 Name        : hw3ex8.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char string[32];
	printf("enter a string: ");
	fflush(stdout);
	gets(string);
	int l =strlen(string);
	printf("reverse string is ");
	for(int i=l-1;i>=0;i--)
	{
		printf("%c",string[i]);
	}
}

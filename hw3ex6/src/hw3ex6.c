/*
 ============================================================================
 Name        : hw3ex6.c
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
	char string[20], letter;
	int counter=0;
	printf("enter a string: ");
	fflush(stdout);
	gets(string);
	printf("enter a character to find its frequency:");
	fflush(stdout);
	scanf("%c",&letter);
	for (int i=0;i<sizeof(string);i++)
	{
		if(string[i]==letter)
			counter++;
	}
	printf("Frequency of %c=%d",letter,counter);
}

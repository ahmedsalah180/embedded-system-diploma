/*
 ============================================================================
 Name        : hw6ex3.c
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
	printf("enter a string:");
	fflush(stdout);
	scanf("%s",string);
	char *ptr=&string;
	ptr=ptr+strlen(string)-1;
	printf("reverse of the string is: ");
	for (int i =0;i<strlen(string);i++,ptr--)
		printf("%c",*ptr);
	return 0;
}

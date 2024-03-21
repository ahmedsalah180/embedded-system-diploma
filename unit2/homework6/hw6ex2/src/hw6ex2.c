/*
 ============================================================================
 Name        : hw6ex2.c
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
	char arr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ptr=&arr;
	printf("the alphabets are:\n");
	for (int i=0;i<strlen(arr);i++,ptr++)
		printf("%c ",*ptr);
	return 0;
}

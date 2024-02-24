/*
 ============================================================================
 Name        : ex5.c
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
	char a;
	printf("enter a character: ");
	fflush(stdout);
	scanf("%c",&a);
	if(a >= 'a' && a <='z')
		printf("you entered an alphabet :)");
	else
		printf("its not an alphabet :(");
}

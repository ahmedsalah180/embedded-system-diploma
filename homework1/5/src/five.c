/*
 ============================================================================
 Name        : five.c
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
	char x;
	printf("enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCI value of %c: %d", x, x);
}

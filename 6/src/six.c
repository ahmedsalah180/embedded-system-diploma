/*
 ============================================================================
 Name        : six.c
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
	int a, b;
	printf("enter the value of a: ");
	fflush(stdout);
	scanf("%d", &a);
	printf("enter the value of b: ");
	fflush(stdout);
	scanf("%d", &b);
	printf("after swapping, the value of a: %d", b);
	printf("after swapping, the value of b: %d", a);
}

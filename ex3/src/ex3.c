/*
 ============================================================================
 Name        : ex3.c
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
	int a, b, c;
	printf("enter the three numbers: ");
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c)
		printf("%d is the largest number",a);
	else if (b>a && b>c)
		printf("%d is the largest number",b);
	else
		printf("%d is the largest number",c);
}

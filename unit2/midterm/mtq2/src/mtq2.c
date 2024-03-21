/*
 ============================================================================
 Name        : mdq2.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

float sqrroot (int x)
{
	static float sqr=1,digit=1;
	digitdown:
	for(;sqr*sqr<x;sqr+=digit);
	if(x/sqr==sqr || digit<0.0001)
		return sqr;
	sqr-=digit;
	digit/=10;
	goto digitdown;
}

int main()
{
	int x =10;
	printf("the square root= %f",sqrroot(x));
}

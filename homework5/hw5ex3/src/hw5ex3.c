/*
 ============================================================================
 Name        : hw5ex3.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Saddcomplex
{
	float real;
	float imag;
}gn1,gn2,gnr;

void getcomplex()
{
	printf("enter the first complex real part and imaginary part respectively: ");
	fflush(stdout);
	scanf("%f %f",&gn1.real,&gn1.imag);
	printf("\n");
	printf("enter the second complex real part and imaginary part respectively: ");
	fflush(stdout);
	scanf("%f %f",&gn2.real,&gn2.imag);
}

void addcomplex()
{
	gnr.real=gn1.real+gn2.real;
	gnr.imag=gn1.imag+gn2.imag;
	printf("sum= %.2f + %.2fi",gnr.real,gnr.imag);
}

int main()
{
	getcomplex();
	addcomplex();
}

/*
 ============================================================================
 Name        : hw5ex5.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define areaofcircle(r) pi*r*r

int main()
{
	float r;
	printf("enter the radius of the circle: ");
	fflush(stdout);
	scanf("%f",&r);
	printf("area= %.2f",areaofcircle(r));
}

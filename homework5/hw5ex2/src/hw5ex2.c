/*
 ============================================================================
 Name        : hw5ex2.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance
{
	unsigned int feet;
	float inch;
}gd1,gd2,gr;

void getdistance()
{
	printf("enter the values of the first distance:\n");
	printf("enter feet: ");
	fflush(stdout);
	scanf("%d",&gd1.feet);
	printf("enter inches: ");
	fflush(stdout);
	scanf("%f",&gd1.inch);
	printf("\n");
	printf("enter the values of the second distance:\n");
	printf("enter feet: ");
	fflush(stdout);
	scanf("%d",&gd2.feet);
	printf("enter inches: ");
	fflush(stdout);
	scanf("%f",&gd2.inch);
}
void returnresult()
{
	gr.feet=gd1.feet+gd2.feet;
	gr.inch=gd1.inch+gd2.inch;
	if(gr.inch>=12)
	{
		gr.feet++;
		gr.inch-=12;
	}
	printf("\n");
	printf("sum of distances= %d feet %.2f inches",gr.feet,gr.inch);
}

int main()
{
	getdistance();
	returnresult();
}

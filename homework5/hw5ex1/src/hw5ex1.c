/*
 ============================================================================
 Name        : hw5ex1.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sinfo
{
	unsigned char name[32];
	unsigned int rollnumber;
	float marks;
}gx;

void getinfo()
{
	printf("enter name: ");
	fflush(stdout);
	scanf("%s",gx.name);
	printf("enter roll number: ");
	fflush(stdout);
	scanf("%d",&gx.rollnumber);
	printf("enter marks: ");
	fflush(stdout);
	scanf("%f",&gx.marks);
}

void printinfo()
{
	printf("\n");
	printf("displaying information:\n");
	printf("name: %s\n",gx.name);
	printf("roll: %d\n",gx.rollnumber);
	printf("marks: %.1f\n",gx.marks);
}

int main()
{
	printf("enter information of student:\n");
	getinfo();
	printinfo();
}

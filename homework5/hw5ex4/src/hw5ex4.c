/*
 ============================================================================
 Name        : hw5ex4.c
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
}x[10];

void getinfo()
{
	for(int i=0;i<10;i++)
	{
		printf("enter data of student %d:\n",i+1);
		printf("enter name : ");
		fflush(stdout);
		scanf("%s",x[i].name);
		printf("enter roll number: ");
		fflush(stdout);
		scanf("%d",&x[i].rollnumber);
		printf("enter marks: ");
		fflush(stdout);
		scanf("%f",&x[i].marks);
		printf("\n");
	}
}

void printinfo()
{
	for(int i=0;i<10;i++)
	{
		printf("\n");
		printf("displaying information of student %d:\n",i+1);
		printf("name: %s\n",x[i].name);
		printf("roll: %d\n",x[i].rollnumber);
		printf("marks: %.1f\n",x[i].marks);
	}
}

int main()
{
	getinfo();
	printinfo();
}

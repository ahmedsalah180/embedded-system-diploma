/*
 ============================================================================
 Name        : hw6ex5.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct emploeedata
{
	unsigned char name[32];
	unsigned int id;
}emp1={"ahmed",3833},emp2={"nezar",2352},emp3={"karem",5057};

struct emploeedata *ptr1 = &emp1;
struct emploeedata *ptr2 = &emp2;
struct emploeedata *ptr3 = &emp3;

int main()
{
	struct emploeedata *arr[] = {ptr1, ptr2, ptr3};
	printf("employee name: %s\n",(*arr)->name);
	printf("employee ID: %d\n",(*arr)->id);
}

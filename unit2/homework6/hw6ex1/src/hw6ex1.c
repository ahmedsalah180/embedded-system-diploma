/*
 ============================================================================
 Name        : hw6ex1.c
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
	unsigned int m=29;
	unsigned int y =&m;
	printf("address of m= 0x%x\n",y);
	printf("value of m= %d\n\r",m);
	unsigned int* ab=&m;
	printf("now ab is assigned with the address of m:\n");
	printf("address of m= 0x%x\n",ab);
	printf("value of m= %d\n\r",*ab);
	m=34;
	printf("the value of m is assigned to 34 now:\n");
	printf("address of m= 0x%x\n",y);
	printf("value of m= %d\n\r",m);
	*ab=7;
	printf("the pointer variable ab is assigned to 7 now:\n");
	printf("address of m= 0x%x\n",ab);
	printf("value of m= %d\n\r",*ab);
}

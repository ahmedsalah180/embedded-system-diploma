/*
 ============================================================================
 Name        : ex2.c
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
	char alpha;
	printf("enter the alphabet: ");
	fflush(stdout);
	scanf("%c",&alpha);
	if (alpha=='a'|alpha=='e'|alpha=='i'|alpha=='o'|alpha=='u')
	{
		printf("%c is a vowel", alpha);
	}
	else
		printf("%c is a consonant",alpha);
}

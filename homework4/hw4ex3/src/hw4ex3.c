/*
 ============================================================================
 Name        : hw4ex3.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i =0;
char sentence[32];
char rsentence[32];
char reverse (char sentence [],int x);

int main()
{
	printf("enter a sentence: \n");
	fflush(stdout);
	gets(sentence);
	int x= strlen (sentence)-1;
	reverse(sentence,x);
}

char reverse (char sentence [],int x)
{
	if(x<0)
		printf("the reversed sentence is: %s",&rsentence[0]);
	else
	{
	rsentence[i++]=sentence[x--];
	reverse(sentence,x);
	}
}

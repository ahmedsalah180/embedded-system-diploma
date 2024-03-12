/*
 ============================================================================
 Name        : mtq4.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }
    return rev;
}

int main()
{
	int x=1057;
	printf("the reversed number= %d",reverse(x));
}

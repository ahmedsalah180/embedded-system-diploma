/*
 ============================================================================
 Name        : mtq6.c
 Author      : ahmed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int uniquenumber(int arr[], int size)
{
	int uniquen = 0;
	for (int i = 0; i < size; i++)
	{
		uniquen ^= arr[i];
	}
	return uniquen;
}

int main() {
	int myArray[] = {4,2,5,2,5,7,4};
	int arraySize = sizeof(myArray) / sizeof(myArray[0]);
	int result = uniquenumber(myArray, arraySize);
	printf("The unique number is: %d\n", result);
}


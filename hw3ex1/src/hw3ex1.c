/*
 ============================================================================
 Name        : hw3ex1.c
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
	int matrixa[2][2];
	int matrixb[2][2];
	printf("enter the elements of the first matrix \n");
	for (int i=1;i<=2;i++)
	{
		for (int j=1; j<=2; j++)
		{
			printf("enter A%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&matrixa[i-1][j-1]);
		}
	}

	printf("enter the elements of the second matrix \n");
	for (int i=1;i<=2;i++)
	{
		for (int j=1; j<=2; j++)
		{
			printf("enter B%d%d: ",i,j);
			fflush(stdout);
			scanf("%d",&matrixb[i-1][j-1]);
		}
	}
	printf("the sum of the two matrices: \n");
	for (int i=1;i<=2;i++)
		{
			for (int j=1; j<=2; j++)
			{
				printf("%d\t",matrixa[i-1][j-1]+matrixb[i-1][j-1]);
			}
			printf("\n");
		}
}

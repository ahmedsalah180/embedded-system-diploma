/*
 ============================================================================
 Name        : hw3ex3.c
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
	int r,c;
	int matrix[10][10];
	printf("enter the rows and columns of the matrix: ");
	fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("enter the elements of the matrix: \n");
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("element M%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for (int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("the transpose of this matrix is:\n");
	for (int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
}

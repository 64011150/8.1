#include <stdio.h>
int A[3][3];
int B[3][3];
int plus[3][3];
int minus[3][3];
int multiply[3][3];
void printf_matrix(int mat[3][3])
{
	int i=0, j;
	while (i < 3)
	{
		j=0;
		while (j < 3)
		{
			if (j > 0)
				printf_s(" | ");
			printf_s("%d", mat[i][j]);
			j++;
		}
		printf_s("\n");
		i++;
	}
}
int main()
{
	int i=0, j, k;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			scanf_s("%d", &A[i][j]);
			j++;
		}
		i++;
	}
	i = 0; 
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			scanf_s("%d", &B[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			plus[i][j] = A[i][j] + B[i][j];
			minus[i][j] = A[i][j] - B[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while ( j < 3)
		{
			int sum = 0;
			k = 0;
			while (k < 3)
			{
				sum = sum + (A[i][k] * B[k][j]);
			multiply[i][j] = sum;
			k++;
			}
			j++;
		}
		i++;
	}
	printf_s("Matrix sum:\n"); printf_matrix(plus); printf("\n");
	printf_s("Matrix difference:\n"); printf_matrix(minus); printf("\n");
	printf_s("Matrix multiply:\n"); printf_matrix(multiply);
	return 0;
}

#include<stdio.h>

int main()
{
	int arr1[100][100], arr2[100][100], res[100][100],m , n, i, j, k;
	printf("Input the order of the matrix: ");
	scanf("%d",&n);
	printf("Enter the values of the matrix 1: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Matrix 1 is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr1[i][j]);
		}
		printf("\n");
	}

	printf("Enter the values of the matrix 2: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Matrix 2 is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				res[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}

	}
	printf("The matrix after multiplication is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",res[i][j]);
		}
		printf("\n");
	}
}
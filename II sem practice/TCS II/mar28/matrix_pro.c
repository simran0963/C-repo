#include<stdio.h>
#define SIZE 1000

int main()
{
	int arr1[SIZE][SIZE], arr2[SIZE][SIZE];
	int m, n, p, i, j, sum=0.0;
	printf("Enter the number of rows in the I matrix: \n");
	scanf("%d", &m);
	printf("Enter the number of columns in the I matrix: \n");
	scanf("%d", &n);
	printf("Enter the value of elements in the I matrix: \n");

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",arr1[i][j]);
		}
	}
	printf("Enter the number of columns in II matrix: \n");
	scanf("%d", &p);
	for(i=0; i<n; i++)
	{
		for(j=0; j<p; j++)
		{
			scanf("%d",arr2[i][j]);
		}
	}
	sum=0.0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			sum+=(arr1[i][j])*(arr2[j][i]);
		}
	}
	
	printf("The product of the two matrices are: %f", sum);
}
// Accept the elements of a square matrix of order m x n from user. Waf that returns the sum of principal and 
// secondary diagonal elements to the calling program
#include<stdio.h>
#define MAC 10

int sum(int arr[MAC][MAC], int n)
{
	int i, j, res=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				res+=arr[i][j];
			}
			else if(i+j==n-1)
			{
				res+=arr[i][j];
			}
		}
	}
	return res;
}
int main()
{
	int i, j, n, arr[MAC][MAC];
	printf("Enter the order of matrix: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("The sum of diagonal elements: %d",sum(arr,n));
	return 0;
}
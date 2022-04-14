#include<stdio.h>

int main()
{
	int n, arr[100][100],i, j;
	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	printf("Enter the elements of the matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The original matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	printf("The transpose matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",arr[j][i]);
		}
		printf("\n");
	}
}
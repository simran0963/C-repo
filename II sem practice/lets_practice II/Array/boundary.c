#include<stdio.h>
#define mac 5
int main()
{
	int i, j, n, m, sum=0;
	char arr[mac][mac];
	printf("The order of matrix: ");
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe array is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0 || i==n-1 || j==0 || j==n-1)
			{
				sum+=arr[i][j];
				printf("%d\t",arr[i][j]);
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
	printf("\nThe sum of array is %d : \n",sum);
	// for(i=0;i<n;i++)
	// {
	// 	for(j=0;j<m;j++)
	// 	{
	// 		printf("%d\t",arr[i][j]);
	// 	}
	// 	printf("\n");
	// }
}
#include<stdio.h>
int swap();

int main()
{
	int n, a[100][100], i, j, temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix before swapping is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("%d ",swap(n,a[n][n]));

}

int swap(int n, int a[n-1][n-1])
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			while(i!=j)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i]=temp;
			}
		}
	}
	return a;
	// printf("Matrix after swapping is: ");
	// for(i=0;i<n;i++)
	// {
	// 	for(j=0;j<n;j++)
	// 	{
	// 		printf("%d\t",a[i][j]);
	// 	}
	// 	printf("\n");
	// }
}
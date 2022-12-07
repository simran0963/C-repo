#include<stdio.h>

int main()
{
	int m, n, o, p, arr1[100][100], arr2[100][100], res[100][100], i, j, k;
	printf("Enter the order of the first matrix: \n");
	scanf("%d  %d",&m,&n);
	printf("Enter the order of the second matrix: \n");
	scanf("%d  %d",&o,&p);
	if(n==o)
	{
		printf("\nEnter the elements of the first matrix: \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}

		printf("\nEnter the elements of the second matrix: \n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				res[i][j]=0;
				for(k=0;k<n;k++)
				{
					res[i][j]+=arr1[i][k]*arr2[k][j];
				}
			}
			printf("\n");
		}
		printf("The resultant matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d  ",res[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("These order of matrices cannot be multiplied.");
		return 0;
	}
	return 0;
}
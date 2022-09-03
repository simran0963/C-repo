//Sort rows in ascending and columns in descending order
#include<stdio.h>
#define mac 5

void ro_asc();
void co_des();
void ro_asc(int m,int n, int arr[mac][mac])
{
	int i, j,k, temp, fi,se,th,key;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
		    key=arr[i][j];
			if(arr[i][j]>arr[i][j+1])
			{
				temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
				fi=arr[i][0];
				se=arr[i][1];
				th=arr[i][2];
			}
		}
	}

	printf("The row sorted matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

void co_dec(int m, int n, int arr[mac][mac])
{
	int i, j,k, temp;
	for(j=0;j<n;j++)
	{
		for(i=0;i<m-1;i++)
		{
			if(arr[i][j]<arr[i+1][j])
			{
			    temp=arr[i][j];
			    arr[i][j]=arr[i+1][j];
			    arr[i+1][j]=temp;
			}
		}
	}
	printf("The column sorted matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n,m,i,j,arr[mac][mac],temp;
	printf("Enter the order of matrix: ");
	scanf("%d %d",&m,&n);
	printf("Enter the elements: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The original matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	ro_asc(m,n,arr);
	co_dec(m,n,arr);
}
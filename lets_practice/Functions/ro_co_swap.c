//Swap rows and columns of a matrix
#include<stdio.h>
#define mac 3
void row_swap();
void column_swap();

int main()
{
	int i, j,a, m,n,arr[mac][mac];
	printf("Order of the matrix is: ");
	scanf("%d %d",&m,&n);
	printf("Enter the elements of the array: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The array is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}

	printf("Enter 0 to swap rows and 1 to swap columns: ");
	scanf("%d: ",&a);
	if(a==0){
		row_swap(m,n,arr);
	}
	else if(a==1){
		column_swap(m,n,arr);
	}
}

void row_swap(int m, int n,int arr[m][n])
{
	int i,j,m1,m2,temp;
	printf("Enter the rows you wanna swap: ");
	scanf("%d %d",&m1,&m2);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(m1<m2)
		    {
		        temp=arr[m1-1][j];
    			arr[m1-1][j]=arr[m2-1][j];
    			arr[m2-1][j]=temp;
		    }
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}

void column_swap(int m, int n,int arr[m][n])
{
	int i,j,n1,n2,temp;
	printf("Enter the columns you wanna swap: ");
	scanf("%d %d",&n1,&n2);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(n1<n2)
		    {
		        temp=arr[i][n1-1];
    			arr[i][n1-1]=arr[i][n2-1];
    			arr[i][n2-1]=temp;
		    }
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}
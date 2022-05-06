//Row sum and column sum of a matrix
#include<stdio.h>
#define mac 10

void rowsum();
void colsum();
int main()
{
    int m,n,i,j,arr[mac][mac];
    printf("Enter the order of matrix: ");
    scanf("%d %d",&m,&n);
    printf("Input the matrix: \n");
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
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    rowsum(m,n,arr);
    colsum(m,n,arr);
}

void rowsum(int m, int n, int arr[m][n])
{
    int i, j, sum=0;
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        printf("\nSum of Row %d is %d",i+1,sum);

		    int i, j, sum=0;
	}
}

void colsum(int m, int n, int arr[m][n])
{
    int i, j, sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
		{
			sum+=arr[j][i];
		}
        printf("\nSum of Column %d is %d",i+1,sum);
		sum=0;
    }
}
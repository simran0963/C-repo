//Normal and trace of the matrix
#include<stdio.h>
#include<math.h>
#define mac 20
int main()
{
	int n, a[mac][mac], i, j, x,sum=0;
	float trace;
    printf("Enter the order of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
		{
			printf("Element [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
		{
			sum+=a[i][j]*a[i][j];
		}
	}
	trace=sqrt(sum);
	sum=0;
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("\nThe trace of the given matrix is : %0.2f",trace);
	printf("\nThe normal of the matrix is : %d",sum);
	return 0;	
}
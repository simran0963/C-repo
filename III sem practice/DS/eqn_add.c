#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX][MAX], i, j, n;
	printf("Enter the degree of the equations: ");
	scanf("%d",&n);
	printf("\n\n\nEnter the coefficients for equation I: \n");
	for(i=n;i>=0;i--)
	{
		printf("\nCoefficient of x^(%d):  ",i);
		scanf("%d",&arr[1][n-i]);
	}
	printf("Equation I is:\t");
	for(i=n;i>=0;i--)
	{
		printf("(%d)x^%d ",arr[1][n-i],i);
		if(i>0 && i<=n){
			printf("+ ");
		}
	}

	printf("\n\n\nEnter the coefficients for equation II: \n");
	for(i=n;i>=0;i--)
	{
		printf("\nCoefficient of x^(%d):  ",i);
		scanf("%d",&arr[2][n-i]);
	}
	printf("Equation II is:\t");
	for(i=n;i>=0;i--)
	{
		printf("(%d)x^%d ",arr[2][n-i],i);
		if(i>0 && i<=n){
			printf("+ ");
		}
	}
	printf("\n\nThe resultant equation is:\t");
	for(i=n;i>=0;i--)
	{
		printf("(%d)x^%d ",arr[1][n-i]+arr[2][n-i],i);
		if(i>0 && i<=n){
			printf("+ ");
		}
	}
	return 0;
}
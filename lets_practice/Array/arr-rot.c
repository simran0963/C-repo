//Rotate an array by n positions
#include<stdio.h>
#define mac 50
int main()
{
	int n, arr[mac], p,i,j,k,a[mac];
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position from where the shifting begins: ");
	scanf("%d",&p);
	j=0;
	for(i=p;i<n;i++)
	{
		a[j]=arr[i];
		j++;
	}
	k=j;
	for(i=0;i<p;i++)
	{
		a[k]=arr[i];
		k++;
	}
	printf("The original array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nThe new array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
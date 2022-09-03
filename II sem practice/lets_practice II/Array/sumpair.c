//Find all pairs of an integer array whose sum is equal to a given number
#include<stdio.h>
#define mac 50
int main()
{
	int n, arr[mac],i,num,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the number whose sum pairs we need to find: ");
	scanf("%d",&num);
	printf("The array is:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nThe pairs which sum to %d are :\n",num);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==num)
			{
				printf("\n'%d' and '%d' ",arr[i],arr[j]);
			}
		}
	}
	return 0;
}
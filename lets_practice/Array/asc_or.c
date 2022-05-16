//Given an array of size n which consists of only 0's, 1's and 2's.sort the array in ascending order
#include<stdio.h>
#define mac 20
int main()
{
	int i, n, arr[mac],j, temp;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:\t");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
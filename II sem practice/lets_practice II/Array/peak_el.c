//WACP to print the peak elements in the array
//A peak element is greater than its adjacent elements
#include<stdio.h>
#define  mac 20
int main()
{
	int n, arr[mac],i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0 && arr[i]>arr[i+1] || i==n-1 && arr[i]>arr[i-1])
		{
			printf("\nPeak element at %d : %d",i,arr[i]);
		}
		else if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
		{
			printf("\nPeak element at %d : %d",i,arr[i]);
		}
	}
	return 0;
}
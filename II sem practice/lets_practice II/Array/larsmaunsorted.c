//Find the largest and the smallest number in an unsorted array
#include<stdio.h>
#define mac 20
int main()
{
	int n, arr[mac],max=0, min=0,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The original array is : \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]>arr[max])
		{
			max=i;
		}
		if(arr[i]<arr[min])
		{
			min=i;
		}
	}
	printf("\nIn the unsorted array,\nMinimum number :   %d\nMaximum number :   %d",arr[min],arr[max]);
	return 0;
}
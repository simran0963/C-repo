#include<stdio.h>

int main()
{
	int arr[100], max, min, n, i, temp,j;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enterthe value of elements: \n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d : ",i);
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
	printf("The sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	max=arr[n-1];
	min=arr[0];
	printf("The min num is: %d\nThe max num is: %d",min, max);
	return 0;
}
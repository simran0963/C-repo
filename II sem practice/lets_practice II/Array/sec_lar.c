#include<stdio.h>
 
int main()
{
	int n, arr[100], i, j, temp;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
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
	printf("\nThe sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	
	printf("\nThe second largest number is: %d",arr[n-2]);
	return 0;
}

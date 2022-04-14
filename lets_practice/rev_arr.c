#include<stdio.h>

int main()
{
	int arr[100], i, n, temp;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the value of elements: \n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<(n+1)/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("The reversed array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
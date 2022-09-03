#include<stdio.h>

int main()
{
	int arr[100], i, n, temp, one;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		one=arr[n];
		temp=arr[n-i-1];
		arr[n-i-1]=arr[n-i];
		arr[n-i]=temp;
	}

	printf("The array after rotating is: \n");
	for(i=0;i<n;i++)
	{
		arr[0]=one;
		printf("%d  ",arr[i]);
	}
	return 0;
}
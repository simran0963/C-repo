#include<stdio.h>

int main()
{
	int arr[100], i, n, num, x;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the value of elements: \n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d :",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the index at which the new number is to be inserted: ");
	scanf("%d", &x);
	printf("Enter the number that is to be inserted: ");
	scanf("%d",&num);
	for(i=n;i>=x;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[x]=num;
	printf("The new array is: ");
	for(i=0;i<=n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
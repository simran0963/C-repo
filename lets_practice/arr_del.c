#include<stdio.h>

int main()
{
	int n, arr[100], pos,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("Element-%d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Input the position where to delete: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		arr[pos-1]=arr[pos];
		pos++;
	}
	printf("The new list is: ");
	for(i=0;i<n-1;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
//Print the value and address of the elements of an array using pointers
#include<stdio.h>
#define mac 10
int main()
{
	int arr[mac],n,i;
	int *ptr;
	ptr=arr;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nValue of element at index %d is : %d",i,*(ptr + i));
		printf("\nAddress is : %p",(ptr+i));
	}
	return 0;
}
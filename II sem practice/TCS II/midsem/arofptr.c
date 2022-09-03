#include<stdio.h>
int main()
{
	int *arr[20],i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\nValue of element at index %d is : %d",i,*(arr + i));
		printf("\nAddress is : %p",(arr+i));
		printf("\n%d ",(arr+i));
	}
	return 0;
}
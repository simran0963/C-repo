#include<stdio.h>
#define mac 100

int main()
{
	int i,j,arr[mac],n;
	printf("Number of elements: ");
	scanf("%d",&n);
	printf("Value of elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr[i]=0;
		}
		else if (arr[i]%2==1)
		{
			arr[i]=1;
		}
	}
	printf("\nThe new array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
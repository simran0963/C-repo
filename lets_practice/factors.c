#include<stdio.h>

int main()
{
	int num, n, arr[100], i, j=0, res[100];
	printf("ENter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to check: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num%arr[i]==0)
		{
			res[j]=arr[i];
			j++;
		}
	}
	printf("Factors of the number are: \n");
	for(i=0;i<j;i++)
	{
		printf("%d  ",res[i]);
	}
	return 0;
}
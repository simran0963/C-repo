#include<stdio.h>

int main()
{
	int n, arr[100], i, j, num, store[100];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the value of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num==arr[i]+arr[j])
			{
				printf("%d and %d add up to %d\n",arr[i],arr[j],num);
			}
		}
	}
	return 0;
}
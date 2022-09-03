//Find the duplicate numbers
#include<stdio.h>
#define mac 20
int main()
{
	int n, arr[mac],i,j,k=0,l,x=0,dup[mac];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe original array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=-1;
				k++;
			}
		}
		if(k!=0 && arr[i]!=-1)
		{
			dup[x]=arr[i];
			x++;
		}
	}
	printf("\nThe duplicate array is: ");
	for(i=0;i<x;i++)
	{
		printf("%d\t",dup[i]);
	}
}
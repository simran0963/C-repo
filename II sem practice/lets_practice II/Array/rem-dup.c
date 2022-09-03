//Remove duplicates from the array
#include<stdio.h>
#define mac 50
int main()
{
	int n,m, a[mac], arr[mac],i,j,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		a[i]=arr[i];
	}
	m=n;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
			}
		}
	}
	printf("\nThe original array is : \t");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nThe array without the duplicates is : \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
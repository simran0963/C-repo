//Move all the zeroes to the beginning or end of the array
#include<stdio.h>
#define mac 20

void beg(int n, int arr[mac])
{
	int i,j,m=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			for(j=i-1;j>=m;--j)
			{
				arr[j+1]=arr[j];
			}
		arr[m]=0;
		++m;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void end(int n, int arr[mac])
{
	int i,j,m=n-1;
	for(i=0;i<m;i++)
	{
		if(arr[i]==0)
		{
			for(j=i+1;j<n;++j)
			{
				arr[j-1]=arr[j];
			}
		arr[m]=0;
		--m;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int n,a[mac],arr[mac],i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
        a[i]=arr[i];
	}
	printf("The array with zeroes in the beginning :\t");
	beg(n,a);
	printf("\nThe array with zeroes in the end :\t\t");
	end(n,arr);
}

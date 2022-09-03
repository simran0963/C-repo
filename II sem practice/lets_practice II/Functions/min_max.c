#include<stdio.h>
#define mac 100
void min_max();
int main()
{
	int n,i,arr[mac],min, max;
	printf("Number of values you want to input: ");
	scanf("%d",&n);
	printf("Input %d values : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min_max(n,arr);
}

void min_max(int n,int arr[mac])
{
	int i, j, mn, mx, key;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		    if(arr[j]>arr[j+1])
		    {
		        key=arr[j];
		        arr[j]=arr[j+1];
		        arr[j+1]=key;
		    }
		}
	}
	mn=arr[0];
	mx=arr[n-1];
	printf("Minimum value is : %d\n",mn);
	printf("Maximum value is : %d",mx);
}
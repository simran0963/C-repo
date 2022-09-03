#include<stdio.h>
#define mac 100
void maxfun();
int main()
{
	int n,i,arr[mac],min, max;
	printf("Number of values you want to input: ");
	scanf("%d",&n);
	printf("Input %d values : \n",n);
	for(i=0;i<n;i++)
	{
	    printf("element %d : ",i);
		scanf("%d",&arr[i]);
	}
	maxfun(n,arr);
}

void maxfun(int n,int arr[mac])
{
	int i, j, mx, key;
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
	mx=arr[n-1];
	printf("Maximum value in the array is : %d",mx);
}
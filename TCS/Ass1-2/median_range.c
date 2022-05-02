#include<stdio.h>
#include<string.h>
#define max 20
float median();
int range();

int main()
{
	int n, i, j, arr[max],key,temp=0,ran;
	float med;
	printf("How many values? ");
	scanf("%d",&n);
	printf("Enter the observations: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	med=median(n,arr);
	ran=range(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("The median is : %0.1f",med);
	printf("The range is : %d",ran);
	return 0;
}

float median(int n, int arr[])
{
	float median;
	if(n%2==0)
	{
		median=(arr[n-1/2]+arr[n+1/2])/2.0;
	}
	else if(n%2!=0)
	{
		median=arr[(n)/2];
	}
	return median;
}

int range(int n, int arr[])
{
	int range;
	range=arr[n-1]-arr[0];
	return range;
}
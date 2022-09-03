#include<stdio.h>
#define mac 10
void isperf(int n, int *a)
{
	int i, j, sum,max=0;
	for(i=0;i<n;i++)
	{
		sum=1;
		for(j=2;j<*(a+i);j++)
		{
			if(*(a+i)%j==0)
			{
				sum+=j;
			}
		}
		if(sum==*(a+i) && sum>max)
		{
			max=sum;
		}
	}
	printf("The largest perfect number is: %d",max);
}
int main()
{
	int i, j, n, arr[mac];
	printf("Number of elements:\t");
	scanf("%d",&n);
	printf("Elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	isperf(n,arr);
	return 0;
}
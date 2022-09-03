//Fibonacci Series
#include<stdio.h>
#define mac 100
int main()
{
	int sum=0,n,i,fir=0,sec=1,arr[mac];
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		arr[0]=0;
		arr[1]=1;
		sum=fir+sec;
		arr[i]=sum;
		fir=sec;
		sec=sum;
	}
	printf("The Fibonacci series is: \n");
	for(i=0l;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
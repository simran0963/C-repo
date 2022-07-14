#include <stdio.h>
#include <math.h>
#define SIZE 100
void sd(int n, float arr[SIZE])
{
	float sum=0.0, mean, SD;
	int i;
	for(i=0; i<n; i++)
	{
		sum+=arr[i];
	}
    mean=sum/n;
	sum=0.0;
	for(i=0; i<n; i++)
	{
		sum+=(arr[i]-mean)*(arr[i]-mean);
	}
	SD = sqrt(sum/n);
	printf("Standard Deviation: %0.2f",SD);
}
int main()
{
	float arr[SIZE]; 
	int n, i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	sd(n,arr);
	return 0;
}
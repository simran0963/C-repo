#include <stdio.h>
#include <math.h>
#define SIZE 1000

int main()
{
	float arr[SIZE], sum=0.0, mean, SD;
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the value of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%f",&arr[i]);
	}
    sum=0.0;
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
	printf("The mean of the numbers is :  %0.2f\nThe standard deviation of the numbers is :  %0.2f", mean, SD);
	return 0;
}
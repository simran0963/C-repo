#include<stdio.h>

int main()
{
	int num, a, n, m, max=0, min=0, range=0;
	float avg, sum=0;
	printf("Enter the limit of numbers: ");
	scanf("%d", &n);
	printf("Enter the value to initialize minimum: ");
	scanf("%d", &m);
	sum=min=m;
	printf("Enter the numbers: ");
	for(a=1; a<=n-1; a++)
	{
		scanf("%d", &num);
		sum+=num;
		if(num<min)
		{
			min=num;
		}
		else if(num>max)
		{
			max=num;
		}
		range=max-min;
		avg=sum/n;
		printf("The range is %d\n", range);
		printf("The average is %0.2f\n", avg);
		return 0;
	}
}
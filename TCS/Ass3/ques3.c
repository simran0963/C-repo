#include<stdio.h>
int main()
{
	int n, a, fact=1;
	float sum=0;
	scanf("%d", &n);
	for(a=1;a<=n;a++)
	{
		fact*=a;
		if(a%2==0)
		{
			sum-=(a*1.0)/fact;
		}
		else{
			sum+=(a*1.0)/fact;
		}
	}
	printf("Sum of the series is %0.2f\n", sum);
	return 0;
}
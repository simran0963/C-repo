// Find the factorial of a number using function(not recursion)
#include<stdio.h>

int main()
{
	int num;
	printf("\nEnter the number to find it's factorial:\n");
	scanf("%d", &num);
	printf("Answer=%d", factorial(num));
}

int factorial(int num)
{
	int i, res=1;
	for(i=2; i<=num; i++)
	{
		res*=i;
	}
	return res;
}

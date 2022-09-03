#include <stdio.h>
int prime(int num);

int prime(num)
{
	for(int i=2; i<=num/2; i++)
	if(num%i==0)
	return 0;
	else 
	return 1;
}

int main()
{
	int n;
	printf("Enter the number: \n");
	scanf("%d", &n);
	int t = prime(n);
	if(t==1)
	printf("Prime");
	else
	printf("Not Prime");
}
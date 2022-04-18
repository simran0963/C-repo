#include<stdio.h>
#include<math.h>

int main()
{
	int num, rem, temp, res[100], i, a;
	printf("Enter the number that has to be converted to its binary form: ");
	scanf("%d",&num);
	temp=num;
	for(i=0;temp!=1;i++)
	{
		a=0;
		rem=temp%2;
		temp/=2;
		res[i]=rem;
		a++;
	}
	for(i=0;i<=a;i++)
	{
		res[a]=1;
		printf("%d ",res[i]);
	}
	for(i=a-1;i>=0;i--)
	{
		printf("%d  ",res[i]);
	}
	return 0;
}
#include<stdio.h>

int main()
{
	float num, temp2;
	int temp, res, rem, i, arr[100],a;
	printf("Enter the number to convert to its binary value: ");
	scanf("%f",&num);
	temp=num;
	for(i=0;i!=0;i++)
	{
		a=0;
		rem=temp%2;
		temp=temp/2;
		arr[i]=rem;
		a++;
	}
	// temp2=num-temp;
	for(i=a;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	// return 0;
}
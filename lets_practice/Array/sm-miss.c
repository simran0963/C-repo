//Find the smallest missing element within a particular range
#include<stdio.h>
#define mac 20
int main()
{
	int n, arr[mac], i,num,k,m=0,mis[mac];
	printf("Enter the number uptil which the numbers are to be checked : ");
	scanf("%d",&n);
	printf("Enter the array and take -1 as an element to end the entries: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==-1)
		break;
	}
	num=1;
	while(num<=n)
	{
		k=0;
		for(i=0;i<n;i++)
		{
			if(arr[i]==num)
			{
				++k;
			}
		}
		if(k!=1)
		{
			mis[m]=num;
			m++;
		}
		num++;
	}
	printf("The missing numbers are: ");
	for(i=0;i<m;i++)
	{
		printf("%d\t",mis[i]);
	}
	printf("\nThe smallest missing number is : %d",mis[0]);
	return 0;
}
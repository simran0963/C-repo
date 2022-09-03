//sum and average
#include<stdio.h>
#define mac 50
int main()
{
	int n, arr[mac],i,sum=0,*ptr;
	float av;
	ptr=&arr;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=*(ptr+i);
	}
	av=sum/n;
	printf("Sum : %d\nAverage : %0.2f",sum,av);
	return 0;
}
//Find the largest sum of contiguous subarray of an array
#include<stdio.h>
#define mac 50
int main()
{
	int n,arr[mac],i,j,max_sum=0,max_num=0;
	printf("Enyer the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		max_num+=arr[i];
		if(max_num>max_sum)
		{
			max_sum=max_num;
		}
		if(max_num<0)
		{
			max_num=0;
		}
	}
	printf("The sum of maximum contiguous elements of subarray is: %d",max_sum);
	return 0;
}
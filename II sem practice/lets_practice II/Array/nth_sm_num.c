//Find the k^th smallest number in the array, where k is smaller than n
#include<stdio.h>
#define mac 20
int main()
{
	int n, arr[mac],i,j,k,temp;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value of k: ");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			
		}
	}
	printf("The %dth smallest element is : %d",k,arr[k-1]);
	return 0;
}
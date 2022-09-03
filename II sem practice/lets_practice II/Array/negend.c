//Place all the negative elements in the end without changing the order of positive elements in original array
#include<stdio.h>
#define mac 20
int main()
{
	int i, j, x,arr[mac],n,m;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Elements of the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	m=n;
	for(i=0;i<m;i++)
	{
		if(arr[i]<0)
		{
			arr[n]=arr[i];
			arr[i]=1121231234;
			n++;
		}
	}
	printf("The new matrix is: ");
	for(i=0;i<n;i++)
	{
		if(arr[i]!=1121231234)
		{
			printf("%d  ",arr[i]);
		}
	}
	return 0;
}
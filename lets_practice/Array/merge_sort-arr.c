#include<stdio.h>

int main()
{
	int arr1[100], arr2[100], sorted[200], m, n, o, i, j, temp;
	printf("Enter the number of elements in the first array: ");
	scanf("%d",&m);
	printf("Enter the value of elements: \n");
	for(i=0;i<m;i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&arr1[i]);
		sorted[i]=arr1[i];
	}

	printf("Enter the number of elements in the second array: ");
	scanf("%d",&n);
	o=i;
	printf("Enter the value of elements: \n");
	for(i=0;i<n;i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&arr2[i]);
		sorted[o]=arr2[i];
		o++;		
	}
	printf("Array is now: ");
	for(i=0;i<n+m;i++)
	{
		printf("%d  ",sorted[i]);
	}
	for(i=0;i<n+m-1;i++)
	{
		for(j=0;j<n+m-1;j++)
		{
			if(sorted[j]>sorted[j+1])
			{
				temp=sorted[j];
				sorted[j]=sorted[j+1];
				sorted[j+1]=temp;
			}
		}
	}
	printf("\nThe new sorted array is: ");
	for(i=0;i<n+m;i++)
	{
		printf("%d  ",sorted[i]);
	}
	return 0;
}
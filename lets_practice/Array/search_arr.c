#include<stdio.h>

int main()
{
	int n, arr[100], arb, i, a=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the arbitary number that needs to be searched: ");
	scanf("%d",&arb);
	for(i=0;i<n;i++)
	{
		if(arr[i]==arb)
		{
			printf("The arbitary value was found in position : %d ",i+1);
		}
		else{
			a++;
		}
	}
	if(a>0)
	{
		printf("Not Found.");
	}
	return 0;
}
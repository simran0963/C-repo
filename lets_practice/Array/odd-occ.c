//Find the numbers occuring odd number of times
#include<stdio.h>
#define mac 50
int main()
{
	int n, arr[mac], i, j, oc;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nOdd occurance numbers: ");
	for(i=0;i<n;i++)
	{
		oc=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j] && arr[i]!=-1)
			{
				arr[j]=-1;
				oc++;
			}
		}
		if(oc%2==1 && oc!=1)
		{
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
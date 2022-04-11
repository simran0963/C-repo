#include<stdio.h>
#define SIZE 100
int main()
{
	int n, i, j, ev=0, od=0, po=0, ne=0;
	char arr[SIZE], odd[SIZE], even[SIZE], pos[SIZE], neg[SIZE];
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the value of elements: \n");
	for(i=0;i<n;i++)
	{
		printf("element-%d: ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		ev++;
		if(arr[i]>=0)
		po++;
		else if(arr[i]%2!=0)
		od++;
		else if(arr[i]<0)
		ne++;
	}
	printf("\nThe number of even integers are: %d",ev);
	printf("\nThe number of odd integers are: %d",n-ev);
	printf("\nThe number of positive integers are: %d",po);
	printf("\nThe number of negative integers are: %d",n-po);
	// for(i=0;i<n;i++)
	// {
	// 	printf("element-%d: ", i);
	// 	scanf("%d",&arr[i]);
	// }
	// for(j=0;j<n;j++)
	// {
	// 	for(i=0;i<n;i++)
	// 	{
	// 		if(arr[i]%2==0)
	// 		{
	// 			even[j]+=arr[i];
	// 			ev++;
	// 		}
	// 	}
	// }
	// for(j=0;j<n;j++)
	// {
	// 	for(i=0;i<n;i++)
	// 	{
	// 		if(arr[i]%2==1)
	// 		{
	// 			odd[j]+=arr[i];
	// 			od++;
	// 		}
	// 	}
	// }
	// for(j=0;j<n;j++)
	// {
	// 	for(i=0;i<n;i++)
	// 	{
	// 		if(arr[i]>=0)
	// 		{
	// 			pos[j]+=arr[i];
	// 			po++;
	// 		}
	// 	}
	// }
	// for(j=0;j<n;j++)
	// {
	// 	for(i=0;i<n;i++)
	// 	{
	// 		if(arr[i]<0)
	// 		{
	// 			neg[j]=arr[i];
	// 			ne++;
	// 		}
	// 	}
	// }
	// printf("\nThe number of even integers are: %d",ev);
	// printf("\nThe even integers are: ");
	// for(i=0;i<ev;i++)
	// {
	// 	printf("%d ",even[i]);
	// }
	// printf("\nThe number of odd integers are: %d",od);
	// printf("\nThe odd integers are: ");
	// for(i=0;i<od;i++)
	// {
	// 	printf("%d ",odd[i]);
	// }
	// printf("\nThe number of positive integers are: %d",po);
	// printf("\nThe positive integers are: ");
	// for(i=0;i<po;i++)
	// {
	// 	printf("%d ",pos[i]);
	// }
	// printf("\nThe number of negative integers are: %d",ne);
	// printf("\nThe negative integers are: ");
	// for(i=0;i<ne;i++)
	// {
	// 	printf("%d ",neg[i]);
	// }
	return 0;
}
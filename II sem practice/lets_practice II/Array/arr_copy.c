#include<stdio.h>
#include<string.h>

int main()
{
	char arr[100], Arr[100];
	int n, i;
	printf("Input the number of elements to be stored in the array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("element-%d: ", i);
		scanf("%d",&arr[i]);
		// Arr[i]=arr[i];
		strcpy(Arr, arr);
	}
	printf("The elements stored in the first array are: ");
	// printf("%d",arr);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nThe elements copied into the second array are: ");
	// printf("%d",Arr);

	for(i=0;i<n;i++)
	{
		printf("%d ",Arr[i]);
	}
}
#include<stdio.h>

int main()
{
	int i, ele, arr[100], sum=0;
	printf("Input the number of elements to be stored in the array: \n");
	scanf("%d",&ele);
	for(i=0;i<ele;i++)
	{
		printf("element-%d: ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("Sum of all the elements stored in the array is: %d",sum);
	return 0;
}
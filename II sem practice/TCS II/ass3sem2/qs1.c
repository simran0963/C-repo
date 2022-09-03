// Read n integers into an array nad store multiples of 7 and 11 in another array and display
#include<stdio.h>
#define MAC 20
int main()
{
	int n, i, j=0, arr[MAC], a[MAC];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%7==0 || arr[i]%11==0)
		{
			a[j]=arr[i];
			j++;
		}
	}
	printf("The multiples of 7 and 11 are: ");
	for(i=0;i<j;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
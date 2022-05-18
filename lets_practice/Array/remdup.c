//Remove the duplicate element of the array
#include<stdio.h>
#define mac 50
int main()
{
	int n, i, j,a[mac],b[mac],x=0;
	printf("Enter the order of matrix: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
		printf("Element [%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!=0000)
			{
				b[x]=a[i];
				a[j]=0000;
				++x;
			}
		}
	}
	printf("The duplicate elements are: ");
	for(i=0;i<x;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0;
}
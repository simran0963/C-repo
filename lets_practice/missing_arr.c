#include<stdio.h>

int main()
{
	int n, m, a[100], b[100], i, j, miss, x=0;
	printf("Enter the number of elements in I array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("Enter the number of elements in II array: ");
	scanf("%d",&m);
	printf("Enter the elements: \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		x=0;
		for(j=0;j<m;j++)
		{
			if(b[j]==a[i])
			{
				x++;
			}
			if(j==m && x==0)
			{
				miss=a[i];
			}
			
		}
	} 
	printf("The missing element in the II array is : %d", miss);
	return 0;
}
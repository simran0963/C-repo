#include<stdio.h>

int main()
{
	int n, a[100][100], i, j, count=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				{
					count++;
				}
			}
			if(i>j || i<j)
			{
				if(a[i][j]!=0)
				{
					count++;
				}
			}
		}
	}
	if(count==0)
	{
		printf("Identity Matrix!");
	}
	else{
		printf("Non identity.");
	}
}
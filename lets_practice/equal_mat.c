#include<stdio.h>

int main()
{
	int n, a[100][100], b[100][100], i, m, j, x=0;
	printf("Enter the size of the I array: ");
	scanf("%d",&m);
	printf("Enter the elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i]);
		}
	}

	printf("Enter the size of the II array: ");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i]);
		}
	}

	if(n==m)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=b[i][j])
				{
					x++;
				}
			}
		}
		if(x>0)
		{
			printf("The given matrices are not equal.");
		}
		else{
			printf("The matrices are equal.");
		}
	}
	else{
		printf("The matrices are not equal.");
	}
	return 0;
}
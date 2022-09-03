#include<stdio.h>

int main()
{
	int n, a[100], i, freq, copy[100], fre[100], j, temp, k;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		freq=0;
		for(j=1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<n;k++)
				{
					a[k]=a[k+1];
					--n;
				}
				freq++;
			}
			fre[i]=freq;
		}
	}
}
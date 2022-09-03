#include<stdio.h>

int main()
{
	int arr[100], n, freq, i, j, ite=0, fre[100]={9};
	printf("Enter the number of elements stored in the array: ");
	scanf("%d",&n);
	printf("Input the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("element-%d : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			freq=1;
			if(arr[i]==arr[j])
			{
				freq+=1;
				arr[j]=arr[j+1];
				fre[i]=freq;
			}
			else
			fre[i]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("The frequency of %d is: %d\n",arr[i],fre[i]);
	}
}
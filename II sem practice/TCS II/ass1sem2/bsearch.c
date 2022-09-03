#include<stdio.h>
#include<string.h>
#define max 100
int search();

int main()
{
	int n, arr[max], i, j, key, res;
	printf("How many values? ");
	scanf("%d",&n);
	printf("Enter the observatons in increasing order : ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("Enter the element to be checked: ");
	scanf("%d",&key);
	res = search(n,key,arr);
	if(res==1)
	{
		printf("Element Found");
	}
	else{
		printf("Not found");
	}
	return 0;
}

int search(int n, int  key, int arr[])
{
	int le, ri, i, mid;
	while(i>=0 || i<=n)
	{
		le=0;
		ri=n-1;
		while(le<=ri)
		{
			mid=(le + ri)/2;
			if(arr[mid]==key)
			{
				return 1;
			}
			else if(arr[mid] > key)
			{
				ri = mid-1;
			}
			else{
				le=mid+1;
			}
		}
		if(le>ri)
		{
			return 0;
		}
	}
}
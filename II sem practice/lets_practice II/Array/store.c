#include<stdio.h>
#define SIZE 1000
int main()
{
	int n, item_type[SIZE]={0}, price[SIZE]={0}, res[SIZE]={0}, i, ans;
	printf("Enter the total number of items: \n");
	scanf("%d", &n);
	printf("Enter the units of types of items: \n");
	for(i=0; i<n; i++)
	{
		printf("Unit of %d item : ",i);
		scanf("%d", &item_type[i]);
	}
	printf("Enter the prices of items: \n");
	for(i=0; i<n; i++)
	{
		printf("Price of %d item : ",i);

		scanf("%d", &price[i]);
	}
	for(i=0; i<n; i++)
	{
		res[i]=item_type[i]*price[i];
		ans+=res[i];
		printf("%d*%d=%d\n",item_type[i],price[i],ans);
	}
	printf("The total sales are: %d", ans);
	return 0;
}
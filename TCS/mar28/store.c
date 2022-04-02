#include<stdio.h>
#define SIZE 1000
int main()
{
	int n, items_sold[SIZE]={0}, monthly_sales[SIZE]={0}, res[SIZE]={0}, i, ans;
	printf("Enter the total number of items: \n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &items_sold[i]);
	}
	for(i=0; i<n; i++)
	{
		scanf("%d", &monthly_sales[i]);
	}
	for(i=0; i<n; i++)
	{
		res[i]=items_sold[i]*monthly_sales[i];
		ans+=res[i];
	}
	printf("The total sales are: %d", ans);
	return 0;
}
// Find the total and average sales done by 'N' employees(empcode,emp name,emp sales) using array of struct
#include<stdio.h>
struct employees
{
	int empcode;
	char empname[30];
	int empsales;
};
int main()
{
	int n, i, sales=0;
	printf("Enter the number of employees: ");
	scanf("%d",&n);
	struct employees a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the employee code: ");
		scanf("%d",&a[i].empcode);
		printf("Enter the employee name: ");
		scanf("%s",&a[i].empname);
		getchar();
		printf("Enter the employees' sales: ");
		scanf("%d",&a[i].empsales);
		sales+=a[i].empsales;
	}
	printf("\nThe total sales are: %d",sales);
	printf("\nThe average sales are: %d",sales/n);
	return 0;
}
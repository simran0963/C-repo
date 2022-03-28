#include<stdio.h>

int main()
{
	int arr[];
	int n, m, i, j;
	printf("Enter the number of rows in the I matrix: \n");
	scanf("%d", &m);
	printf("Enter the number of columns in I matrix: \n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	for(j=0; j<m; j++)
	scanf("%d", arr[i][j]);

}
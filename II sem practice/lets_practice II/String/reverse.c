#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	int i, j, n;
	char str[max], rev[max];
	printf("Enter the string: ");
	fgets(str, max, stdin);
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		j=n-i;
		rev[j]=str[i];
	}
	printf("The reverse string is: ");
	for(i=0;i<=n;i++)
	{
		printf("%c ",rev[i]);
	}
	return 0;
}
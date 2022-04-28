#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	int i,j, key, n;
	char str[max];
	printf("Enter the string: ");
	fgets(str, max, stdin);
	n = strlen(str);
	for(i=1;i<n;i++)
	{
		key=str[i];
		j=i-1;
		while(j>=0 && str[j]>key)
		{
			str[j+1]=str[j];
			j=j-1;
		}
		str[j+1]=key;
	}
	printf("After sorting the string appears like: ");
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
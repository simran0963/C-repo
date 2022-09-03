#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	int i, len;
	char str[max];
	printf("Enter the string: ");
	fgets(str,max,stdin);
	len = strlen(str);
	printf("The characters of the string are: ");
	for(i=0;i<len;i++)
	{
		printf("%c  ",str[i]);
	}
	return 0;
}
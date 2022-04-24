#include<stdio.h>
#include<string.h>
#define max 100

int main()
{
	char str[max];
	printf("Enter the string:\n");
	fgets(str, max, stdin);
	printf("%d",strlen(str)-1);
}
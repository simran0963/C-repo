#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	int i, n,pos,len;
	char str[max];
	printf("Enter the string: ");
	gets(str);
	printf("\n");
	printf("Enter the position to start extraction: ");
	scanf("%d",&pos);
	printf("Input the length of substring: ");
	scanf("%d",&len);
	printf("The substring retrieve from the string is: ");
	for(i=pos-1;i<pos+len;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
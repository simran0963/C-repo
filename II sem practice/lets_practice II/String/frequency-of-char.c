// Find the frequency of a character
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, count=0, n;
	char str[mac], chr;
	scanf("%[^\n]s",&str);
	fflush(stdin);
	scanf("%c",&chr);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]==chr)
		{
			count++;
		}
	}
	printf("The frequency of %c is : %d",chr,count);
	return 0;
}
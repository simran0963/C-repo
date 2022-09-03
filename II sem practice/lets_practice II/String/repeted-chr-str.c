// Find the repeated character in a string
#include<stdio.h>
#include<string.h>
#define mac 50
void main()
{
	int i, j, n;
	char str[mac];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				printf("%c",str[i]);
				i=n+1;
				break;
			}
		}
	}
}
//Convert vowels to uppercase
#include<stdio.h>
#include<string.h>
#define mac 100
int main()
{
	int n, i, j;
	char str[mac], v[]={'a','e','i','o','u'};
	printf("\n\n\n\n\n");
	gets(str);
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			if(v[j]==str[i])
			{
				str[i]=str[i]-32;
			}
		}
	}
	puts(str);
	printf("\n\n\n\n\n");
	return 0;
}
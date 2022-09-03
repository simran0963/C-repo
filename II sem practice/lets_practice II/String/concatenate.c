// Concatenate two strings manually
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, j=0, n, m;
	char str1[mac],str2[mac];
	gets(str1);
	gets(str2);
	n=strlen(str1);
	m=strlen(str2);
	for(i=n;i<n+m-1;i++)
	{
		str1[i] = str2[j];
		j++;
	}
	puts(str1);
}
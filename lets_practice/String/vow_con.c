#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
int main()
{
	int i, n, len, vo=0, co=0, wo=0, sp=0;
	char str[MAX], caps[MAX], vowel[MAX], consonant[MAX];
	printf("Enter the string: ");
	fgets(str,MAX,stdin);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		caps[i]=toupper(str[i]);
	}
	for(i=0;i<strlen(caps);i++)
	{
		if(caps[i]=='A'||caps[i]=='E'||caps[i]=='I'||caps[i]=='O'||caps[i]=='U')
		{
			vowel[vo]=caps[i];
			++vo;
		}
		else if(caps[i]==' ' && caps[i-1]!=' ')
		{
			++sp;
		}
	}	co=n-vo-sp;
	printf("Total length : %d\nTotal words : %d\nVowels : %d\nConsonants : %d\nSpaces : %d",n-1,sp+1,vo,co-1,sp);
}
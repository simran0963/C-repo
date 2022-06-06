//WACP to encrypta text as cipher and then decode the encrypted text
#include<stdio.h>
#include<string.h>
#define mac 100

	

int main()
{
	char A[mac],a[mac],txt[mac];
	int i,n=0,m;
	printf("Enter the text: ");
	scanf("%[^\n]s",txt);
	fflush;
	printf("Enter the number by which this needs to be shifted: ");
	scanf("%d",&m);
	printf("The cipher code is: ");
	for(i=0;i<strlen(txt);i++)
	{
		if(txt[i]=='Z')
		{
			txt[i]=txt[i]-26;
		}
		if(txt[i]=='z')
		{
			txt[i]=txt[i]-26;
		}
		else if(txt[i]!='Z' && txt[i]!=' ' && txt[i]!='.' || txt[i]!='z' && txt[i]!=' ' &&txt[i]!='.')
		{
			txt[i]=txt[i]+m;
		}
		
	}
	for(i=0;i<strlen(txt);i++)
	{
		printf("%c",txt[i]);
	}
	printf("\nThe original text is: ");
	for(i=0;i<strlen(txt);++i)
	{
	    if(txt[i]=='A')
		{
			txt[i]=txt[i]+26;
		}
		if(txt[i]=='a')
		{
			txt[i]=txt[i]+26;
		}
		else if(txt[i]!='A' && txt[i]!=' ' && txt[i]!='.' || txt[i]!='a' && txt[i]!=' ' && txt[i]!='.')
		{
			txt[i]=txt[i]-m;
		}
	}
	for(i=0;i<strlen(txt);i++)
	{
		printf("%c",txt[i]);
	}
	return 0;
}
//trimming the leading and the trailing white spaces
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, n, j, count;
	char str[mac];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	n=strlen(str);
	printf("Length of string is: %d",n);
	if(str[0]==' ')
	{
		for(i=0;i!='\0';i++)
		{
			str[i]=str[i+1];
		}
		n--;
	}
	for(i=n;i>=0;i--)
	{
		if(str[i]==' ')
		{
			count++;
		}
		if(str[i]>=65 &&str[i]<=90 || str[i]>=97 && str[i]<=122)
		{
			break;
		}
	}
	n=n-count;
	printf("\nNew length of string is: %d",n);
	return 0;
}
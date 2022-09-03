// Read a string from the keyboard and find the frequency of lowercase and uppercase letters 
#include<stdio.h>
#include<string.h>
#define MAC 50
int main()
{
	int n, i, j, lw=0, up=0;
	char str[MAC];
	printf("Enter the string: ");
	scanf("%[^\n]s",&str);
	printf("\n");
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=91)
		{
			up++;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			lw++;
		}
	}
	printf("Total Uppercase characters:\t%d\nTotal Lowercase characters:\t%d",up,lw);
	return 0;
}
// My name is Chikki,Chikki,Chikki, Chikki
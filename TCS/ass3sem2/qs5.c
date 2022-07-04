/* Read a main string along with a starting position and number of character of a substring to be extracted 
from the user in the calling program. Define a UDf that returns the substring to the calling program. 
Implement using a pointer. Print the extracted string in the calling program.*/

// A good education transforms an individual into a good citizen
#include<stdio.h>
#include<string.h>
#define MAC 50

const char* substring(char str[MAC], int s, int n)
{
	int i, j=0;
	char *res;
	for(i=s-1;i<s+n-1;i++)
	{
		res[j]=str[i];
		j++;
	}
	// printf("%s",res);
	return res;
}

void main()
{
	int i,s, n;
	char str[MAC], ans[MAC];
	scanf("%[^\n]s",&str);
	scanf("%d %d",&s,&n);
	puts(substring(str,s,n));
	// printf("%s",substring(str,s,n));
}
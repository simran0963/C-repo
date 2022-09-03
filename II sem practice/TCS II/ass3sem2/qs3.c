/* Accept a string from the user in the main program and write a UDF that returns the reverse of the string. 
In the calling program check if it's a palindrome */
#include<stdio.h>
#include<string.h>
#define MAC 50
const char * reverse(char str[MAC])
{
	int i, j,n;
	char rev[strlen(str)];
	n=strlen(str);
	for(i=0;i<n&&str[i]!='\0';i++)
	{
		rev[n-i-1]=str[i];
	}
	// printf("%s\n",rev);
	return rev;
}

int main()
{
	int i;
	char str[MAC], ans[MAC];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	for(i=0;i<strlen(str);i++)
	{
	ans[i] = * (reverse(str)+i);
	}
  puts(reverse(str));
  if(strcmp(reverse(str),str)==0)
		printf("\nPalindrome.");
	else
		printf("Not a Palindrome!");
	return 0;
}
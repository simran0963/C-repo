#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100

int main()
{
	char s1[max], s2[max];
	int a, b;
	printf("Enter string I: ");
	// scanf("%[^\n]%*c",s1);
	fgets(s1, 20, stdin);
	printf("Enter string II: ");
	// scanf("%[^\n]%*c",s2);
	fgets(s2, 20, stdin);

	a = strlen(s1);
	b = strlen(s2);
	if(a>b)
	{
		printf("String I is greater.");
	}
	else if(a<b)
	{
		printf("String I is smaller.");
	}
	else{
		printf("Both the strings are equal.");
	}
	
	// a = strcmp(s2,s1);
	// if(a<0)
	// {
	// printf("String I is greater.");
	// }
	// if(a>0)
	// {
	// printf("String I is smaller.");
	// }
	// else
	// {
	// 	printf("Both are equal.");
	// }
	return 0;
}
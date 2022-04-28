#include<stdio.h>
#include<ctype.h>
#define MAX 1000

int main()
{
	char str[MAX];
	int len, i, count=0;
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	while(i!='\0')
	{
		printf("%c",str[i]);
		++count;
		++i;
	}
	printf("\nThe length of the string is : %d",count);
	return 0;
}
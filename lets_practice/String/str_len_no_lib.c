#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int main()
{
	char str[MAX];
	int len, i, count=0;
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	for(i=0;i!='\0';i++)
	{
		printf("%c",str[i]);
		++count;
	}
	printf("\nThe length of the string is : %d",count);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="abccd",str2[]="abcd";
	int l;
	l=strcmp(str,str2);
	// printf("First :");
	// scanf("%s",&str);
	// scanf("%s",&str2);
	printf("\n%d\n",l);
	if(l==0)
	{
		printf("Equal");
	}
	else if(l>0)
	{
		printf("Str is grt");
	}
	else if(l<0)
	{
		printf("Str2 is grt");
	}
	return 0;
}
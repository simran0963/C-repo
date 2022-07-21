// Compare two strings without using library functions
#include<stdio.h>
#define mac 50
int main()
{
	int i, j, n=0, m=0, ch=0;
	char str[mac],str2[mac];
	scanf("%[^\n]s",&str);
	fflush(stdin);
	scanf("%[^\n]s",&str2);
	for(i=0;str[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		m++;
	}
	if(n==m)
	{
		for(i=0;i<n;i++)
		{
			if(str[i]==str2[i])
			{
				continue;
			}
			else{
				ch+=1;
			}
			if(ch!=0)
			{
				printf("The strings are not equal.");
				n=n+1;
				break;
			}
		}
		if(ch==0)
		{
			printf("The strings are equal");
		}
	}
	else{
		printf("The strings are not equal.");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100

int main()
{
	int i=0, j=0, n=0, k=0, count=0;
	char str1[max], str2[max];
	printf("Enter the string: ");
	gets(str1);
	printf("\n");
	printf("Input the substring to be searched: ");
	gets(str2);
	for(i=0;i<strlen(str1);++i)
	{
		count =0;
		if(str2[0]==str1[i] && count!=-1)
		{
			for(j=i;j<i+strlen(str2);j++)
			{
				if(str2[i]==str1[j])
				{
					count++;
				}
				else{
					count = -1;
					return -1;
				}
			}
		}
	}	
	if(count==strlen(str2))
	{
		printf("Found"); 
	}
	else
	printf("Not Found.");
}
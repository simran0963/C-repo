//Largest and smallest word in a string
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, j, n,max=0, min=mac, count, maxi,mini;
	char str[mac];
	scanf("%[^\n]s",str);
	n = strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			count++;
		}
		if(str[i]==' ')
		{
			if(count>max)
			{
				max = count;
				maxi=i-count;
			}
			if(count<min )
			{
				min = count;
				mini=i-count;
			}
			count=0;
		}
	}
	printf("\nThe largest word is: ");
	for(i=maxi;i<maxi+max;i++)
	{
		printf("%c",str[i]);
	}
	printf("\nThe smallest word is: ");
	for(i=mini;i<mini+min;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
//It is a string with smallest and largest word
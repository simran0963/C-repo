//find the largest and the smallest word in a string
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	char str[mac],str2[mac];
	int n, i=0,max_ind=0, count=0, j,min=20,min_ind=0, k=0,max=0;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
	    count =0;
		for(j=i;str[j]!=' ' && str[j]!='\0';j++)
		{
			count++;
		}
		if(count>max)
		{
			max=count;
			max_ind=j-max;
		}
		if(count<min && count>0)
		{
		    min=count;
		    min_ind=j-min;
		}
	}
	
	for(i=0;i!='\0';i++)
	{
		printf("%c\t",str[i]);
	}
	printf("\nThe max value is: %d",max);
	printf("\nThe largest word is: ");
	for(i=max_ind;i<max_ind+max;i++)
	{
	    printf("%c",str[i]);
	}
	printf("\nThe min value is: %d",min);
	printf("\nThe smallest word is: ");
	for(i=min_ind;i<min_ind+min;i++)
	{
	    printf("%c",str[i]);
	}
}
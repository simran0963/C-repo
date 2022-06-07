// #include<stdio.h>
// int main()
// {
// 	char *str;
// 	str="*s";
// 	printf(str,*K\n);
// 	return 0;
// }
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	char str[mac],str2[mac];
	int n, i=0,ind, j,min=20,min_ind=0, k=0,max=0;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	while(str[i]!='\0')
	{
	    str2[i]=str[i];
	    i++;
	}
	n=strlen(str);
	while(str[i]!='\0' && str[i]!='#')
	{
		j=0;
		while(str[j]!=' ')
		{
			k++;
			str[j]='#';
			if(k>max)
			{
				max=k;
				ind=j;
			}
			if(k<min && k!=0)
			{
				min=k;
				min_ind=j;
			}
			j++;
		}
		i++;
		k=0;
	}
	
	printf("The maximum length word is: ");
	for(i=ind-max;i<max;i++)
	{
		printf("%c",str2[i]);
	}
	printf("The minimum length word is: ");
	for(i=min_ind-min;i<min;i++)
	{
		printf("%c",str2[i]);
	}
	return 0;
}
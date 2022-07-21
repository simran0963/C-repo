// Check if the given substring is present in a string
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, j, k=0, n, m, cnt=1;
	char str[mac],sub[mac];
	scanf("%[^\n]s",&str);
	fflush(stdin);
	scanf("%[^\n]s",&sub);
	n=strlen(str);
	m=strlen(sub);
	while(str[i]!='\0')
	{
		k=0;
		if(str[i]==sub[k] && str[i-1]==' ')
		{
			cnt=1;
			for(j=i;j<i+m;j++)
			{
				printf("\n%d,%d,%d",i,j,k);
				if(str[j]==sub[k])
				{
					cnt++;
					k++;
					printf("%d",cnt);
				}
				if(cnt==m && str[j+1]==' ')
				{
					printf("Yes the substring is a part of the string.");
					i=n+1;
				}
			}
		}
		i++;
	}
	if(cnt==m)
	{
		printf("Yes the substring lies in the string.");
	}
	else{
		printf("No, it doesnt");
	}
}
// Remove the non alphabets
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int i, j, n;
	char str[mac], temp;
	scanf("%[^\n]s",&str);
	n = strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
		{
			continue;
		}
		else{
			for(j=i;j<n-1;j++)
			{
				str[j]=str[j+1];
			}
			n=n-1;
		}
	}
	for(i=0;i<n;i++)
    {
      printf("%c",str[i]);
    }
	return 0;
}
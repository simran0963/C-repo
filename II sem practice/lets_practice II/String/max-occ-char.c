// Maximum occurring character
#include<stdio.h>
#include<string.h>
#define mac 50
int main()
{
	int fre[mac], i, j, k=0 ,n, cnt=0 , max=0, ind;
	char str[mac],alp[mac];
	scanf("%[^\n]s",&str);
	fflush(stdin);
	n = strlen(str);
	for(i=0;i<n && str[i]!=-1;i++)
	{
		cnt=1;
		for(j=i+1;j<n && str[j]!=-1;j++)
		{
			if(str[i]==str[j])
			{
				cnt++;
				str[j]=-1;
			}
		}
		alp[k]=str[i];
		fre[k]=cnt;
		k++;
		if(cnt>max)
		{
			max=cnt;
			ind=k-1;
		}
	}
	printf("The highest frequency is %d of %c. ",max,alp[ind]);
	return 0;
}
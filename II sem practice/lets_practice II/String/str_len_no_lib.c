#include<stdio.h>
#include<ctype.h>
#define MAX 1000

int main()
{
	char str[MAX];
	int len, i, count=0;
	printf("Enter the string: ");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
		++count;
	}
	printf("\nThe length of the string is : %d",count-1);
	return 0;
}



/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define mac 100

int main()
{
    int n, i, j, k, fre, fr[mac];
    char arr[mac];
    printf("Enter the string: ");
    fgets(arr, mac, stdin);
    n = strlen(arr);
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            fre=1;
            if(arr[j]==arr[i])
            {
                fre++;
                arr[j]=0;
            }
        }
        fr[i]=fre;
    }
    printf("The frequencies of various elements are: ");
    i=0;
    while(arr[i]!='\0')
    {
            printf("%c ",arr[i]);
            ++i;
    }
}
*/
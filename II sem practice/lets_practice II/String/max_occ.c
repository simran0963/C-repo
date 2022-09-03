#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define mac 100

int main()
{
    int i, j, max, fre[mac]={0}, fr, n, rem, key=1;
    char str[mac];
    printf("Enter the string: ");
    fgets(str, mac, stdin);
	n= strlen(str);
	for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            fr=1;
            if(str[j]==str[i])
            {
                fr++;
                rem=j;
            }
            str[rem]=0;
            fre[rem]=0;
        }
        fre[i]=fr;
        
    }
    for(i=0;i<n-1;i++)
    {
        if(str[i]>str[key])
        {
            key=i;
            max=str[key];
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(str[i]!=0 && str[i]!=' ')
        {
            printf("Frequency %c : %d\t",str[i],fre[i]);
        }
    }
    printf("\nHighest frequency is of %c at index %d is: %d",max,key,fre[key]);
    return 0;
}
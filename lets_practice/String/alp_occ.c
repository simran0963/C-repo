#include <stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
int main()
{
    int i, j, freq[MAX]={0}, fre=0;
    char c, arr[MAX], a2[MAX], alp[MAX];
    i=0;
    for(c='A';c<='Z';++c) 
    {
       alp[i]=c;
       i++;
    }
    
    printf("Enter the string: ");
    fgets(arr, 20, stdin);
    for(i=0;i<strlen(arr);++i)
    {
        a2[i]=toupper(arr[i]);
    }
    
    for(j=0;j<strlen(a2);j++)
    {
        for(i=0;i<26;i++)
        {
            if(alp[i]==a2[j])
            {
                freq[i]++;
            }
        }
    }
    
    printf("The frequency of various characters are: \n");
    for(i=0;i<26;i++)
    {
        printf("%c : %d\t  ",alp[i],freq[i]);
    }
    return 0;
}

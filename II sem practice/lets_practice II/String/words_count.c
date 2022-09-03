#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100

int main()
{
    int i, sp=0;
    char str[max];
    printf("Enter the string: ");
    fgets(str, max, stdin);
    for(i=0;i<strlen(str);++i)
    {
        if(str[i]==' ')
        {
            sp++;
        }
    }
    printf("The total number of words are: %d",sp+1);
    return 0;
}
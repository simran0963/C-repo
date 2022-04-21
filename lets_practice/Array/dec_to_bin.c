#include<stdio.h>

int main()
{
    int num, i, res[100], rem=100,temp=num, x=0;
    printf("\nEnter the number to be converted to its binary value: ");
    scanf("%d",&num);
    temp=num;
    for(i=0;temp!=0;i++)
    {
        rem=temp%2;
        temp/=2;
        res[i]=rem;
        x++;
    }
    printf("\nThe binary number for %d is :",num);
    for(i=x-1;i>=0;i--)
    
    {
        printf("%d",res[i]);
    }
    return 0;
}
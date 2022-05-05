//Wapc to find the sum of the series 1!/1 + 2!/2 + 3!/3...
#include<stdio.h>

int fact();
int main()
{
    int n, i, ans;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    ans=fact(n);
    printf("Sum of the series is : %d ",ans);
    
}
int fact(int n)
{
    int i,j,fac=1,res,ans=0;
    for(i=n;i>=1;i--)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac*=j;
        }
        res=fac/i;
        ans+=res;
    }
    return ans;
}
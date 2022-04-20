#include<stdio.h>

int main()
{
    int n, a[100], b[100], i, j, x;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements of the first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                x++;
            }
        }
        if(x==0)
        {
            printf("The number missing in the second array is : %d",a[i]);
        }
    }
    return 0;
}
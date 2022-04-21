#include<stdio.h>

int main()
{
    int n, arr[100], i, j, temp, num;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]!=1)
        {
            printf("\nThe missing number is : %d",i);
            return 0;
        }
    }
    return 0;
}
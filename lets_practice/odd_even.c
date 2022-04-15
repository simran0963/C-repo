#include<stdio.h>
#define SIZE 1000
int main()
{
    int arr[SIZE], even[SIZE], odd[SIZE], i, n, e=0, o=0;
    printf("Enter the elements in the array: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        printf("Element-%d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[e]=arr[i];
            e++;
        }
        else if(arr[i]%2!=0)
        {
            odd[o]=arr[i];
            o++;
        }
    }
    printf("Even elements: ");
    for(i=0;i<e;i++)
    {
        printf("%d  ",even[i]);
    }
    printf("\nOdd elements: ");
    for(i=0;i<o;i++)
    {
        printf("%d  ",odd[i]);
    }
    return 0;
}
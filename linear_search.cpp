//program for linear search?
#include<stdio.h>
int main()
{
    int arr[100],val,i,n;
    printf("Enter the number of elements: " );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the values of array: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you want to search: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            printf("The index of the value is: %d",i);
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
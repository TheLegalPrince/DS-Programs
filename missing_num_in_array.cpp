#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int arr[]={1,2,3,5,6,7,8};
    for(i=0;i<sizeof(arr);i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
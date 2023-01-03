#include<stdio.h>
int main()
{
    int i,n,j,key;
    int a[100];
    printf("Enter the number of elements:" );
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=2;j<n;j++)
        {
            key=a[j];
            i=j-1;
        }
        while(i>0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
    a[i+1]=key;
    }
    for(i=0;i<n;i++)
    {
        printf("The sorted array is:\n %d",a[i]);
    }
    return 0;
}
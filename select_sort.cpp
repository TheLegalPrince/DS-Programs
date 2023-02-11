#include<stdio.h>
int main()
{
    int i,j,temp,n,min;
    int a[100];
    printf("Enter the number of elements:" );
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        min=i;
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("The sorted array is ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
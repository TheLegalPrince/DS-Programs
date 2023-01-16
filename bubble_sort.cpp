#include<stdio.h>
int main()
{
    int a[100];
    int i,j,n,temp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
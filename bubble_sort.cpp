#include<stdio.h>
int main()
{
    int a[]={10,20,30,99,50,60,70,80,90};
    int i,j,c,temp=0;
    int n=sizeof(a)/sizeof(a[0]);
    /*The first loop will be executed upto the (last-1) index i.e, (len of array-1)*/
    for(i=0;i<n-1;i++)
    {
        /*The second loop will be executed upto the last index i.e, (len of array-1)*/
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
    for(c=0;c<n;c++)
    {
        printf("%d",a[c]);
    }
    return 0;
}
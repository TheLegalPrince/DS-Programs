#include<stdio.h>
int main()
{
    int i,n,j,key;
    int a[100];
    printf("Enter the number of elements:" );
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
       for (i = 1; i < n; i++) {  
        key = a[i];  
        j = i - 1;  
  
        while(j>=0 && key <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = key;    
    }
    printf("\nThe sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf( "%d ",a[i]);
    }
    return 0;
}
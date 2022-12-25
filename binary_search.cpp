#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
 
int main(void)
{
    int i, e, x, arr[100];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter number of elements: ");
    scanf("%d",&e);
    for(i = 0; i < e; i++)
    {
        printf("Enter %d element (in ascending order): ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search - ");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
    {
        printf("Element is not present in array");
    }
    else
    {
        printf("Element is present at index %d",result);
    }
    return 0;
}
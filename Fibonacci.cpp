#include<stdio.h>  
void fibonacci(int);  
int main()  
{  
    int limit;  
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &limit);  
  
    fibonacci(limit);  
  
    return 0;  
}  
  
void fibonacci(int num)  
{  
    int n1 = 0, n2 = 1, n3, count;  
  
    printf("\nFibonacci Series ..\n");  
    printf("1. %d\n2. %d\n", n1, n2);  
  
    for(count = 3; count <= num; count++)  
    {  
        n3 = n1 + n2;  
        printf("%d. %d\n", count, n3);  
  
        n1 = n2;  
        n2 = n3;  
    }  
}

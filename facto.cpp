#include <stdio.h>
int fact(int);
int main()
{
	int n,factorial;
 
  	printf("Enter a number to calculate it's factorial: ");
  	scanf("%d",&n);
  	factorial=fact(n);
    printf("Factorial of the num(%d) = %d\n",n,factorial);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

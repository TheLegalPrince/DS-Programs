#include <stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter the row size");
	scanf("%d",&n);
	printf("Enter the column size");
	scanf("%d",&m);
	int a[n][m],r;
	r=n;
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
if (n==m)
{	
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if (i<=j)
				{
				printf("%d ",a[i][j]);
				}
			else
			{
			printf("0 ");
			}
		}
		printf("\n");
	}
}
else
{
printf("Matrix is not a square matrix");
return 0;
}
}

#include <stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter the row size");
	scanf("%d",&n);
	printf("Enter the column size");
	scanf("%d",&m);

	//enter first matrix elements
	printf("Enter the first matrix elements\n");
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	//enter second matrix elements
	printf("Enter the second matrix elements\n");
	int b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	// sum
	int c[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[n][m]=a[n][m]+b[n][m];
		}
	}
	
	//printing sum
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",&c[i][j]);
		}
	}
	return 0;
}

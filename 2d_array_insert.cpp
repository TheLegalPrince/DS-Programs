#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,num;
	printf("Enter the elements: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Elements at [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nPrinting the elements of an array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==2)
			printf("\n");
		}
	}
	printf("\nEnter the location in a matrix where you want to update value: ");
	scanf("%d %d",&i,&j);
	printf("\nEnter the value to be replaced: ");
	scanf("%d",&num);
	arr[i][j]=num;
	printf("\nArray after updating: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==2)
			printf("\n");
		}
	}
	return 0;
}

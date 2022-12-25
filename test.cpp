#include<stdio.h>
int main()
{
	int chetan[100];
	int i,n;
	printf("Enter the no. of elements you want to insert: ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the element chetan[%d]: ",i);
		scanf("%d", &chetan[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\nThe elements of array are: %d",chetan[i]);
	}
	return 0;
}

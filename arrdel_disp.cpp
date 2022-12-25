#include <stdio.h>
int display(int a[],int n,int i)
{
	for(i=0;i<n;i++);
	{
		printf("%d",a[i]);
	}
	printf("/n");
}
int deletion(int a[],int size,int pos)
{
	for(i=pos;i>=size;i++)
	{
		a[i]=a[i+1];
	}
	a[pos]=element;
	return 1;
}
int main()
{
int i,d,p,a[100],size=5,pos=2;
for(i=0;i<size;i++)
{
	printf("Elements at [%d]: ",i);
	scanf("%d",&a[i]);
}
display(a,size,i);
deletion(a,size,pos,100);
size=size+1;
display(a,size,i);
return 0;
}

#include<stdio.h>
int main()
{
	char str[100]="hello world";
	char sub[100];
	int pos=6, len=3, a=0;
	while(a<3)
	{
		sub[a]=str[pos+a];
		a++;
	}
	printf("The substring is: %s",sub);
}

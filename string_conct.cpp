#include<stdio.h>
int main()
{
	int i;
	int len=0;
	char str1[100]="Hello";
	printf("The first String is: %s",str1);
	char str2[100]="Welcome";
	printf("\nThe second String is: %s",str2);
	while (str1[len]!='\0')
	{
		len++;
	}
	for(i=0;str2[i]!='\0';i++,++len)
	{
		str1[len]=str2[i];
	}
	for(i=0;str1[i]!='\0';i++)
	{
	printf("The concatenated sring is: %s",str1[i]);
	}
	return 0;
}

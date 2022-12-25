#include <stdio.h>
int main()
{
	int i;
	char count;
	char str[100];
	int chars;
	printf("Enter the elements of the string: ");
	fgets(str,sizeof(str),stdin);
	printf("The string is: ");
	puts(str);
	printf("Enter the character you want to search: ");
	chars=getchar();
	for(i=0;str[i];i++)
	{
		if(str[i]==chars)
		{
			count++;
		}
	}
	printf("Total occurences of '%c'=%d",chars,count);
	return 0;
}

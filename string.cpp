#include <stdio.h>
int main()
{
	int i;
	int count=0;
	char str[100];
	printf("Enter the elements of the string: ");
	fgets(str,sizeof(str),stdin);
	printf("The string is: ");
	puts(str); //or we can even use strlen() function to count the length of a string
	for(i=0;str[i]!='\0';i++)
	{
		++count;
	}
	printf("The number of elements are: %d", count);
	return 0;
}

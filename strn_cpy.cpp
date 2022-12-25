#include <stdio.h>
int main()
{
	char str1[100], str2[100];
	printf("Enter the string: ");
	scanf("%s",str1);
	fgets(str1,100,stdin);
	printf("\n The first string is: %s",str1);
	for(int i=0;str1[i]!='/0';i++)
	{
	str2[i]=str1[i];
	}
	printf("The copied string is: %s",str2);
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char str1[50], str2[50];
void length();
void copy();
void append();
void compare();
void reverse();
int main()
{
	int choice;
	while (1)
	{
		printf("\nOperations performed on String");
		printf("\n1.Length of the string\n2.copy the string\n3.Append in the string\n4.compare the strings\n5.Reverse the string\n6.End");
		printf("\n\nEnter the choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			length();
			break;
		case 2:
			copy();
			break;
		case 3:
			append();
			break;
		case 4:
			compare();
			break;
		case 5:
			reverse();
			break;
		case 6:
			exit(0);

		default:
			printf("\nInvalid choice!!");
		}
	}
}

void length()
{
	char str1[50];
	printf("Enter A String: ");
	fflush(stdin);
	gets(str1);
	printf("String Length: %d", strlen(str1));
	return;
}
void copy()
{
	int i;
	printf("Enter Any String: ");
	fflush(stdin);
	gets(str1);
	strcpy(str2, str1);
	printf("Original String: %s", str1);
	printf("\nCopied String: %s", str2);
}
void append()
{
	printf("Enter First String: ");
	fflush(stdin);
	gets(str1);
	printf("Enter Seccond String: ");
	fflush(stdin);
	gets(str2);
	strcat(str1, str2);
	printf("String After Append: %s", str1);
	return;
}
void compare()
{
	int i;
	printf("Enter First String: ");
	fflush(stdin);
	gets(str1);
	printf("Enter Seccond String: ");
	fflush(stdin);
	gets(str2);
	i = strcmp(str1, str2);
	printf("\n %d", i);
}
void reverse()
{
	int i, j, len = 0;
	printf("Enter Any String: ");
	fflush(stdin);
	gets(str1);
	printf("Reversed String: %s",strrev(str1));
}

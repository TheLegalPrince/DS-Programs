#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct
{
   int r_no;
   char name[50];
   char course[50];
}student;

void display(student *);
int main()
{
    student *ptr;
    ptr=(student *)malloc(sizeof(student));
    printf("Enter a roll no: ");
	scanf("%d",&ptr->r_no);
	printf("Enter a name: /n");
	gets(ptr->name);
	//scanf("%s",&ptr->name);
	printf("Enter a course: ");
	scanf("%s",&ptr->course);
    display(ptr);
    return 0;
}
void display(student *ptr)
{
	printf("<<<<<The Data entered is>>>>>");
	printf("\n%d",ptr->r_no);
	puts(ptr->name);
	//printf("\n%s",ptr->name);
	printf("\n%s",ptr->course);
}

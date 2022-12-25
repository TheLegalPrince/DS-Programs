#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *start=NULL;
void delete_bpos();
void delete_apos();
void display();
int main()
{
	int opt;
	while(1)
	{
		printf("1.Delete a node before a given position\n");
    	printf("2.Delete a node after a given position\n");
    	printf("3.Display the linked list\n");
		printf("4.Exit\n");
		printf("enter the choice: ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				delete_bpos();
				break;
			case 2:
				delete_apos();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;		
		}
	}
	return 0;
}
void delete_bpos()
{
	int num;
	struct node *ptr;
	
	printf("Enter the number after you want to delete an element");
	if (start==NULL)
	{
		printf("The list is empty");
	}
	else
	{
	ptr=start;
	while(ptr->data!=num)
	{
		ptr=ptr->next;
	}
	(ptr->prev)->prev=ptr;
	}
}
void delete_apos()
{
	
}
void display()
{
	
}

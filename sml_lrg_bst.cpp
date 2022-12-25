#include<stdio.h>
#include<malloc.h>

typedef struct BST
{
 int data;
 struct BST *left;
 struct BST *right;
}node;

node *create();

int main()
{
    char ch;
    node *root=NULL,*temp;
    do
    {
    	temp=create();
        if (root==NULL)
        {
        root=temp;
        }
        else
        {
        insert(root,temp);
        }
        printf("Do you want to Continue or not? ");
        scanf("%c",&ch);
	}
    while(ch=='Y'|| ch=='y');
    scanf("%d",&ch);
    printf("\nThe preorder traversal is: ");
    preorder(root);
    return 0;
}

node *create()
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->left=NULL;
    temp->right=NULL;
    printf("Enter the value: ");
    scanf("%d",&temp->data);
    return temp;
}
struct node* findse(struct node* tree)
{
    if(tree==NULL)||(tree->left==NULL)
    return tree;
    else
    return find se(tree->left);
}
struct node* findle(struct node* tree)
{
    if(tree==NULL)||(tree->right==NULL)
    return tree;
    else
    return findle(tree->right);
}
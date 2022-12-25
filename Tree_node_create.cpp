#include<stdio.h>
#include<malloc.h>

typedef struct BST
{
 int data;
 struct BST *left;
 struct BST *right;
}node;

node *create();
void insert(node*,node*);
void preorder(node*);
void inorder(node*);
void postorder(node*);
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
    printf("\nThe inorder traversal is: ");
    inorder(root);
    printf("\nThe postorder traversal is: ");
    postorder(root);
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
void insert(node*root,node*temp)
{
    if(temp->data<root->data)
    {
        if(root->left!=NULL)
        {
            insert(root->left,temp);
        }
        root->left=temp;
    }
    if(temp->data>root->data)
    {
        if(root->right!=NULL)
        {
            insert(root->right,temp);
        }
        root->right=temp;
    }
}
void preorder(node*root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
   
}
void postorder(node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
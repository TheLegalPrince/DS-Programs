#include<stdio.h>
#include<stdlib.h>
 
struct binarytree
{
    int data;
    struct binarytree *right, *left;
};

typedef struct binarytree node;
int main()
{
    node *root;
    node *tmp;
    int c;
    root=NULL;
    /*Inserting nodes into tree*/
    insert(&root,9);
    insert(&root,10);
    insert(&root,15);
    insert(&root,6);
    insert(&root,12);
    insert(&root,17);
    insert(&root,2);

    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Oredr Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);

    printf("Number of nodes %d \n",c);
    totaln(root);
} 
void insert(node ** tree, int val)
{
    node *temp=NULL;
    if(!(*tree))
    {
        temp=(node*)malloc(sizeof(node));
        temp->left=temp->right=NULL;
        temp->data=val;
        return;
    }
    if(val<(*tree)->data)
    {
        insert(&(*tree)->left,val);
    }
    else if(val>(*tree)->data)
    {
        insert(&(*tree)->right,val);
    }
}
void print_preorder(node *tree)
{
    if(true)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}
 
void print_inorder(node* tree)
{
    if(true)
    {
        printf("%d\n",tree->left);
        print_preorder(tree->data);
        print_preorder(tree->right);
    }
}
int totaln(node* tree)
{
    if(tree==NULL)
    return 0;
    else
    return(totaln(tree->left)+totaln(tree->right)+1);
}
//HARSHIT SEN 
#include <stdio.h>
#include <stdlib.h>
struct node
{

    int data;
    struct node *left;
    struct node *right;
};
struct node *getanode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->right = newnode->left = NULL;
    return newnode;
}
int max(int a,int b)
{
 return a>b ? a:b;

}
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = getanode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
    
}
int search(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("not found!");
    }
    else if (root->data == key)
    {
        printf("found!");
    }
    else if (key <= root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
int findmin(struct node *root)
{
    if (root == NULL)
    {
        printf("Tree is empty!\n");
    }
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current = root;
    while (current->left != NULL)
    {

        current = current->left;
    }
    return current->data;
}
int findmax(struct node *root)
{
    if (root == NULL)
    {
        printf("Tree is empty\n");
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
int find_height(struct node * root)
{
    if(root==NULL)
    {
       return -1;
    }
    
        
    return max(find_height(root->left),find_height(root->right))+1;
}
void preorder(struct  node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d  ", root->data);
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 88);
    root = insert(root, 1);
    root = insert(root, 99);
    root = insert(root, 90);
    printf("maximun is:%d", findmax(root));
    printf("\nminimum is:%d", findmin(root));
    int key;
    printf("\nEnter value to be searched:");
    scanf("%d", &key);
    printf("%d", search(root, key));
    printf("\n%d",find_height(root));
    printf("PREORDER::");
    preorder(root);
    return 0;
}
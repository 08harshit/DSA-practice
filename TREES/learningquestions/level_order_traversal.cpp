#include <iostream>
#include <queue>
using namespace std;
struct node
{
    char data;
    node *left;
    node *right;
};

node *insert(struct node *root, char x)
{
    if (root == NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = x;
        new_node->left = NULL;
        new_node->right = NULL;
    }
    else if (x <= root->data)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }
    return root;
}
void level(node *root)
{
    if (root == NULL)
    {
        printf("EMPTY");
        return;
    }
    queue<node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        node *current = Q.front();
        
        cout << current->data;
        
        if (current->left != NULL)
        {
            Q.push(current->left);
        }
        else if (current->right != NULL)
        {
            Q.push(current->right);
        }
        Q.pop();

    }
}
int main()
{
    node *root = NULL;
    root = insert(root, 'M');
    root = insert(root, 'B');
    root = insert(root, 'Q');
    root = insert(root, 'Z');
    root = insert(root, 'A');
    root = insert(root, 'C');

    level(root);
}
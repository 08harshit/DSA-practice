#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *GetNode(int data)
{
    Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->left, new_Node->right = NULL;
    return new_Node;
}
Node *insert_node(Node *root, int data)
{
    if (root == NULL)
    {
        root = GetNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert_node(root->left, data);
    }
    else
    {
        root->right = insert_node(root->right, data);
    }
    return root;
}

Node *left_view(Node *root)
{
    if (root == NULL)
    {
        return root;
    }
    else
    {
        cout << root->data;
        root->left = left_view(root->left);
    }
    return root;
}
int main()
{
    Node *root;
    root = insert_node(root,1);
    root = insert_node(root,2);
    root = insert_node(root,3);
    root = insert_node(root,4);
    root = insert_node(root,5);
    root = insert_node(root,6);
    root = insert_node(root,7);
    root = insert_node(root,8);
    root = left_view(root);

    return 0;
}
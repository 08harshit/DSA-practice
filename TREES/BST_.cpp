#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
struct node
{
	int data;
	node *right;
	node *left;
};
node *getaNode(int data)
{
	node *newNode = new node;
	newNode->data = data;
	newNode->right = newNode->left = NULL;
	return newNode;
}

node *insert(node *root, int data)
{
	if (root == NULL)
	{
		root = getaNode(data);
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
bool Search(node *root, int data)
{
	if (root == NULL)
	{
		return false;
	}
	else if (root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
		return Search(root->right, data);
	}
}

node *findmin(node *root)
{
	while (root->left != NULL)
	{
		root = root->right;
	}
	return root;
}
struct node* Delete(struct node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct node *temp = findmin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
int main()
{
	node *root = NULL;
	root = insert(root, 5);
	root = insert(root, 7);
	root = insert(root, 8);
	root = insert(root, 6);
	int number;
	cout << "Enter number be searched\n";
	cin >> number;
	// If number is found, print "FOUND"
	if (Search(root, number) == true)
		cout << "Found\n";
	else
		cout << "Not Found\n";
	return 0;
}
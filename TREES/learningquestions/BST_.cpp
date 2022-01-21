#include<iostream> 
#include<queue>                                                //HARSHIT SEN
using namespace std;
struct node 
{
	char data; 
	node* left;
	node* right;
};
node* getnewnode(char data)
{
	node * newnode = new node();
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

node *BST(node * root,char data)


{
   if(root==NULL)
   {
	   root=getnewnode(data);
   }
 else if(data<=root->data)
 {
            root->left=BST(root->left,data);
 }
 else {
	 root->right=BST(root->right,data);
 }
return root;
}
node * preorder(node* root)
{
	if(root==NULL)
	{
		return root;
    }
	cout<<root->data<<endl;
	preorder(root->left);
	
	preorder(root->right);
}
node* search(node *root,char key)
{
	if(root==NULL)
	{ cout<<"NOT FOUND";
		return root;
	}
	else if(key<root->data)
      {
		  search(root->left,key);
	  }
    else if (key>root->data)
	{
		search(root->right,key);
	}
	else 
		{cout<<"FOUND!";
	}

}
node* levelorder(node * root)
{
	if(root==NULL)
	{   cout<<"EMETY TREE!"<<endl;
		return NULL;
	}
}
node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
node* Delete(node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
		
	else {
		
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		
		else if(root->left == NULL) {
			 node *temp = root; 
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			 node *temp = root;
			root = root->left;
			delete temp;
		}
		
		else { 
		 node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
  
node* levelorder(node* root)
{
	if (root==NULL)
	{   cout<<"empty!";
        return root;	
	}
 else 
   { 
	 queue<node *> Q;
	 Q.push(root);
	 
	 while(!Q.empty())
	 {
		 node* current =Q.front();
		 cout<<current->data;
		if(current->left!=NULL)
		{
			Q.push(current->left);
		}
		else if(current->right!=NULL)
		{
        Q.push(current->right);
		}
		Q.pop();}
	 }
	
}
int main(){
node * root=NULL;	
root=BST(root,'A');
root=BST(root,'G');
root=BST(root,'J');
root=BST(root,'K');
root=BST(root,'U');
root=BST(root,'Q');
root=BST(root,'W');
root=BST(root,'E');
root=BST(root,'R');
preorder(root);
search(root,'L');
cout<<endl;
Delete(root,'U');
preorder(root);
levelorder(root);
	return 0;
} 
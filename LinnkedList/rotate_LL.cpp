#include<iostream>
using namespace std;
struct node{
int data;
node * next;
}*head;
void insert(int x) //inserting from head.
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}
void rotate()
{

}

#include <bits/stdc++.h> //HARSHIT SEN
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head1=NULL,*head=NULL;

void insert(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    if (head!= NULL)
    {
        temp->next = head;
    }
    head = temp;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "Empty Linked list";
    }
    node *trev = new node();
    trev = head;
    while (trev != NULL)
    {
        cout << trev->data << "->";
        trev = trev->next;
    }
    cout << "null" << endl;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    insert(head1, 5);
    insert(head1, 6);
    insert(head1, 9);
    insert(head2, 3);
    insert(head2, 8);
    insert(head2, 0);
    display(head1);
    display(head2);
    return 0;
}
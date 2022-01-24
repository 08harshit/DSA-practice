#include <iostream>
//HARSHIT SEN
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;
void inserthead(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}
void display()
{
    node *trev = new node;
    trev = head;
    while (trev != NULL)
    {
        cout << trev->data << "->";
        trev = trev->next;
    }
    cout << "NULL" << endl;
}
void remove_duplicate()
{
    node *trev = head;
    while (trev->next != NULL)
    {
        if (trev->data == trev->next->data)
        {
            trev->next = trev->next->next;
        }

        else
        {
            trev = trev->next;
        }
    }
}

int main()
{
    inserthead(1);
    inserthead(2);
    inserthead(3);
    inserthead(3);
    inserthead(4);
    display();
    remove_duplicate();
    display();
    return 0;
}
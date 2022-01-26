#include <iostream> //HARSHIT SEN
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
    node *temp = new node;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void front()
{
    node *temp = NULL;
    node *trev = head;
    while (trev->next != NULL)
    {
        temp = trev;
        trev = trev->next;
    }
    trev->next = head;
    head = trev;
    temp->next = NULL;
}
int main()
{
    inserthead(7);
    inserthead(6);
    inserthead(5);
    inserthead(4);
    inserthead(3);
    inserthead(2);
    inserthead(1);
    inserthead(0);
    display();
    front();
    display();

    return 0;
}
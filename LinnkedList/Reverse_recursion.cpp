#include <iostream> //HARSHIT SEN
using namespace std;
struct node
{
    int data;
    node *next;
} * head;
void head_insert(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}
void reverse(struct node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverse(p->next);
    p->next->next = p;
    p->next = NULL;
}
void display()
{
    node *temp;
    temp = head;
    while (temp != NULL)
    {
       
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    head = NULL;

    head_insert(3);
    head_insert(5);
    head_insert(6);
    head_insert(1);
    head_insert(9);
    head_insert(2);
    struct node *p = head;
    display();
    reverse(p);
    cout << "\nafter revrsing:"<<endl;
    display();

    return 0;
}
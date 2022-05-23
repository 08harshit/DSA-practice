#include <iostream> //HARSHIT SEN
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;
void inserthead(int item)
{
    node *temp = new node;
    temp->data = item;
    temp->next = NULL;
    if (head != NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void reverse()
{
    node *current = new node;
    node *prev = new node;
    node *next = new node;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void add_one()
{ node * trev=new node;
  reverse();
trev=head;
node *temp=head;
int carry=1;
while(trev->next!=NULL)
{
trev->data=trev->data +carry;
if(trev->data>=10)
{   carry=1;
    trev->data=(trev->data)%10;
}
else {
    carry =0;
}
temp=trev;
trev=trev->next;
}
if (carry>0)
{
    node* new_node=new node;
    new_node->data=carry;
    new_node->next=NULL;
    trev->next=new_node;
}
reverse();
}
void display()
{
    node *temp = new node;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    inserthead(9);
    inserthead(9);
    inserthead(9);
    display();
    add_one();
    display();
    return 0;
}
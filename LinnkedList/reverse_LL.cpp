#include<iostream> //HARSHIT SEN
using namespace std;
class node
{
public:
    int data;
    node *link;
} * head;
void headinsert(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->link = NULL;
    if (head != NULL)
    {
        temp->link = head;
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
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;

    }
head=prev;
}
void display()
{
    node *temp = new node;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->link;
    
    }
cout<<endl;
}
int main()
{
    head = NULL;
    int n, x;
    cout << "how many elements:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        headinsert(x);
    }
    cout<<"linked list:";
    display();
    reverse();
    cout<<"after reversing:";
    display();
    return 0;
}
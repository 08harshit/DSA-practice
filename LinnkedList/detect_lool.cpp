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
node* detect_loop()
{      
    if(head==NULL &&head->next==NULL)
{
    return head; 
}
    node* slow=head;
    node* fast=head;
    node* entry=head;
   
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast)
        {
            while(slow!=entry)
            {
                slow=slow->next;
                entry=entry->next;
            }
            return entry;
        }

    }
return NULL;

}
int main()
{
    node *there_is_loop;
    inserthead(4);
    inserthead(11);
    inserthead(7);
    inserthead(8);
    inserthead(1);
    inserthead(5);
    inserthead(6);
    inserthead(0);
    head->next->next->next->next->next = head->next;
  there_is_loop=detect_loop();
  cout<<there_is_loop->data;

    
    return 0;
}
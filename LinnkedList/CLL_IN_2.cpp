#include <iostream>
using namespace std;

struct node {
    int num;
    struct node * next;
}*head;
void build(int n)//function to build linked list
{
    int i, num;
    struct node *preptr, *newnode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        cout<<"Enter data of the list:\n";
        cin>>num;
        head->num = num;
        head->next = NULL;
        preptr = head;
        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            cin>>num;
            newnode->num = num;
            newnode->next = NULL;	
            preptr->next = newnode;	
            preptr = newnode;   		
        }
        preptr->next = head;//linking last node with head node
    }
}
void display(struct node *head)//function to display list
{
    struct node *tmp;
    int n = 1;
    
    if(head == NULL)
    {
        cout<<"List is empty";
    }
    else
    {
        tmp = head;
        
        
        do {
            cout<<tmp->num<<" ";
            tmp = tmp->next;
            n++;
        }while(tmp != head);
    }
}
void splitList( struct node **head1,  struct node **head2) //function to split list into two halves
{ 
  struct node *slow = head; 
  struct node *fast = head;  
  
  if(head == NULL) 
    return; 
   
  while(fast->next != head && fast->next->next != head) //finding middle of the list 
  { 
     fast = fast->next->next; 
     slow = slow->next; 
  }   
  
  if(fast->next->next == head) 
    fast = fast->next;       
    
  *head1 = head;     
      
    if(head->next != head) 
    *head2 = slow->next; 
    
   
  fast->next = slow->next; 
    
     
  slow->next = head;        
} 

int main()//main function
{
    int n;
    struct node *head1 = NULL; 
    struct node *head2 = NULL;
    head = NULL;
    cout<<"Enter the size of circular linked list: ";
    cin>>n;
    build(n); 
    cout<<"\nCircular linked list data:\n";
    display(head);
    splitList(&head1, &head2);
    cout<<"\nFirst half data: ";
    display(head1);	
    cout<<"\nSecond half data: ";
    display(head2);
    return 0;
}
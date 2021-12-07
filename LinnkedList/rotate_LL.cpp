#include <iostream>//harshit sen
using namespace std;
struct node
{
    int data;
    node *next;
} * head;
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
void deletehead()
{
    struct node *temp = head; //deleting head only
    head = temp->next;
    free(temp);
}
void rotate()
{
    node *temp = new node;
    node *traverse = new node;
    traverse = head;
    temp->data = traverse->data;
    temp->next = NULL;
    while (traverse->next != NULL)
    {
        traverse = traverse->next;
    }
    traverse->next = temp;
    deletehead();
    
}
void display()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head; //displaying linked list.
    printf("linked list:");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    int n,x,rpos; 
    cout<<"Enter number of elements to be inserted:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
    display();
    cout<<"How many positions to be rotated:";
    cin>>rpos;
    for(int i=0;i<rpos;i++)
    {
        rotate();
    }
    display();
    return 0;
}
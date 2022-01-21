#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}* head=NULL;
void insertat(int item,int pos)
{
    struct node* temp=(struct node *)malloc(sizeof(struct node));
    struct node* temp1=(struct node *)malloc(sizeof(struct node));
    temp1->data=item;
    temp1->next=NULL;
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    temp1->next=temp->next;
    temp->next=temp1;
}

void inserthead(int item)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;
if(head!=NULL)
{
    temp->next=head;
}
head=temp;
}
void display()
{    printf("\n");
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
printf("NULL");
}
int main()
{
    int item;
    inserthead(4);
    inserthead(3);
    inserthead(2);
    inserthead(1);
    inserthead(8);
    inserthead(9);
    inserthead(10);
    inserthead(66);
    display();
    insertat(0,4);
    display();
    return 0;
}




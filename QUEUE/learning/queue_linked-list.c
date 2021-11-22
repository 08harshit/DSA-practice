#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL && rear == NULL)

    {
        front = rear = temp;
        return;
    }

    rear->next = temp;

    rear = temp;
}

void dequeue()
{
    struct node *temp = front;
    if (front == NULL)
    {
        printf("Empty");
        return;
    }
    else if (front == rear)
    {
        rear = front = NULL;
    }
    else
    {
        front = front->next;
    }
    free(temp);
}
void print()
{
    struct node *temp = front;
    printf("QUEUE: ");
    while (temp != NULL)
    {

        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{

    printf("QUEUE implementation using LINKED LIST!\n");
    enqueue(2);
    print();
    enqueue(4);
    print();
    enqueue(6);
    print();
    dequeue();
    print();
    enqueue(8);
    print();

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link; //harshit Sen
} * head;
void insert(int x) //inserting from head.
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;
    if (head != NULL)
    {
        temp->link = head;
    }
    head = temp;
}
void insertposition(int data, int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    if (n == 1)
    {
        new_node->link = head; //inserting at desired position.
        head = new_node;
        return;
    }
    temp = head;
    for (int i = 0; i <= n - 2; i++)
    {
        temp = temp->link;
    }
    new_node->link = temp->link;
    temp->link = new_node;
}
void deletehead()
{
    struct node *temp = head; //deleting head only
    head = temp->link;
    free(temp);
}
void deleteposition(int n)
{
    struct node *temp = head; //deleting at desired position.
    if (n == 1)
    {
        head = temp->link;
        free(temp);
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->link;
    }
    struct node *temp2 = temp->link;
    temp->link = temp2->link;
    free(temp2);
}
void print()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head; //displaying linked list.
    printf("linked list:");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int x, n;
    head = NULL;

    printf("Harshit\nNuber of elements:");

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    print();

    insertposition(888, 1);
    insertposition(6666, 1);
    insertposition(6, 3);
    printf("\nAfter inserting at n position\n");
    print();
    printf("After deleting head\n");
    deletehead();
    print();

    deleteposition(3);
    printf("After deleting at postion\n");
    print();

    return 0;
}

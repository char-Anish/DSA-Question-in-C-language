#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;

    head = newnode;

    return head;
}

void display(struct node *head)
{
    struct node *temp;
    while (temp != 0)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("Null");
}
int main()
{
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 500;
    head->next = second;

    second->data = 600;
    second->next = third;

    third->data = 800;
    third->next = NULL;

    head = insert(head, 8800);
    head = insert(head, 456);
    head = insert(head, 999);

    display(head);

    return 0;
}
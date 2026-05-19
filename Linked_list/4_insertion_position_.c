#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int value, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;

    if (pos == 1)
    {
        newnode->next = head;
        return newnode;
    }

    struct node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
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

    head = insert(head, 150, 3);

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
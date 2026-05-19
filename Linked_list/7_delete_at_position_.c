#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *deletenode(struct node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (pos == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *temp = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
    }

    struct node *del = temp->next;
    temp->next = del->next;
    free(del);

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

    head = deletenode(head, 2);

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
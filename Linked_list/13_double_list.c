#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
void reverce(struct node *head)
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->pre;
    }

    printf("NULL");
}
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->pre = NULL;
    head->next = second;

    second->data = 88;
    second->pre = head;
    second->next = third;

    third->data = 99;
    third->pre = second;
    third->next = NULL;

    display(head);
    printf("\n");
    reverce(head);
    return 0;
}

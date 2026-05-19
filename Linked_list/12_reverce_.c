#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *reverce(struct node *head)
{
    struct node *pre = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    return pre;
}
struct node *input(struct node *head, int n)
{
    struct node *temp = NULL, *newnode;
    int i, value;
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
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
    struct node *head = NULL;
    int n;
    printf("Enter the size of an list : ");
    scanf("%d", &n);
    head = input(head, n);
    display(head);
    head = reverce(head);
    printf("\n");
    display(head);
    return 0;
}
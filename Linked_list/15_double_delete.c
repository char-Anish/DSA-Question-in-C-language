#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *delete_begin(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(temp);
    return head;
}
struct node *delete_end(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);

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

    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode;

    int i, n, value;

    printf("Enter size of list: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &value);

        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    printf("\nOriginal List:\n");
    display(head);
    head = delete_begin(head);

    printf("\nAfter Deleting from Beginning:\n");
    display(head);
    head = delete_end(head);

    printf("\nAfter Deleting from End:\n");
    display(head);

    return 0;
}
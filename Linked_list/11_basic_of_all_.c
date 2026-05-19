#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *pos_delete(struct node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (pos == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(head);
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
struct node *ending_delete(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
struct node *begining_delete(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    head = head->next;
    free(temp);
    return head;
}
struct node *pos_insert(struct node *head, int value, int pos)
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
struct node *end_insert(struct node *head, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node *begining_insert(struct node *head, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;
    head = newnode;

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
    struct node *head = NULL, *temp = NULL, *newnode;
    int i, n, value;
    printf("Enter the size of an list : ");
    scanf("%d", &n);

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
    int choice, pos;
    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value : ");
            scanf("%d", &value);
            head = begining_insert(head, value);
            break;

        case 2:
            printf("Enter a value : ");
            scanf("%d", &value);
            head = end_insert(head, value);
            break;

        case 3:
            printf("Enter a value & position : ");
            scanf("%d %d", &value, &pos);
            head = pos_insert(head, value, pos);
            break;

        case 4:
            head = begining_delete(head);
            break;

        case 5:
            head = ending_delete(head);
            break;

        case 6:
            printf("Enter the position : ");
            scanf("%d", &pos);
            head = pos_delete(head, pos);
            break;

        case 7:
            display(head);
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
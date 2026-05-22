#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;
void push()
{
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Stack is overflow\n");
        return;
    }

    printf("Enter value\n");
    scanf("%d", &x);

    newnode->data = x;
    newnode->next = top;
    top = newnode;

    printf("%d is inseted\n", x);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is underflow\n");
        return;
    }
    struct node *temp = top;
    printf("%d is deleted\n", top->data);

    top = top->next;
    free(temp);
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is the top element in the stack\n", top->data);
    }
}

void display()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int choice;
    do
    {

        printf("\n>>>Stack using linked list<<<\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
        }

    } while (choice != 5);
    return 0;
}

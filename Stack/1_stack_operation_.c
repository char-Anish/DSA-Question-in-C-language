#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push
void push()
{
    int x;

    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d", &x);

        top++;
        stack[top] = x;
    }
}

// Pop
void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

// Display
void display()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack elements are:\n");

        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

// Peek
void peek()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top element is: %d\n", stack[top]);
}

// Is Full
void isfull()
{
    if (top == MAX - 1)
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");
}

// Is Empty
void isempty()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Stack is Not Empty\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Is Full\n");
        printf("6. Is Empty\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
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
            isfull();
            break;
        case 6:
            isempty();
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid Choice\n");
        }

    } while (choice != 7);

    return 0;
}
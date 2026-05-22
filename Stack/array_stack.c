#include <stdio.h>
#define n 5

int stack[n];
int top = -1;

void push(int x)
{

    if (top == n - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("List is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}
void peek()
{
    if (top == -1)
    {
        printf("List is empty\n");
    }else{
        printf("\nTop = %d",stack[top]);
    }
}
int main()
{
    push(10);
    push(50);
    push(99);
    push(1250);

    display();
    peek();

    return 0;
}
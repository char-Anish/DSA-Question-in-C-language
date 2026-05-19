#include <stdlib.h>
#include <stdio.h>
struct node
{
    int coff;
    int exp;
    struct node *next;
};
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%dx%d ", head->coff, head->exp);
        if (head->next != NULL)
        {
            printf(" + ");
        }
        head = head->next;
    }
}
int main()
{
    struct node *head = NULL, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    head->coff = 3;
    head->exp = 2;

    head->next = (struct node *)malloc(sizeof(struct node));
    head->next->coff = 2;
    head->next->exp = 1;

    head->next->next = (struct node *)malloc(sizeof(struct node));
    head->next->next->coff = 1;
    head->next->next->exp = 0;

    display(head);

    return 0;
}
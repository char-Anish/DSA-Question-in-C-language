#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insert_begin(struct node *head, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }
    return newnode;
}
struct node *insert_end(struct node *head, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL)
    {
        newnode->prev = NULL;
        return newnode;
    }
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;

    return head;
}

struct node *insert_pos(struct node *head, int value, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    if(pos == 1){
        newnode->prev = NULL;
        newnode->next = head;
        if(head != NULL){
            head->prev = newnode;
        }
        return newnode;
    }
    struct node* temp = head;
    for(int i=0; i<pos-2; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if(temp->next != NULL){
        temp->next->prev = newnode;
    }
    temp->next = newnode;
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
    struct node *head, *second, *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 55;
    head->prev = NULL;
    head->next = second;

    second->data = 99;
    second->prev = head;
    second->next = third;

    third->data = 123;
    third->prev = second;
    third->next = NULL;

    head = insert_begin(head, 1);
    head = insert_end(head, 999);
    head = insert_pos(head, 222,2);
    display(head);
    return 0;
}
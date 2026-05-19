#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *begining_delete(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    head = head->next;
    free(temp);
    return head;
}
struct node* end_delete(struct node* head){
    struct node* temp = head;
    if(head == NULL){
        printf("list is empty");
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
struct node* pos_delete(struct node* head, int pos){
    if(head == NULL){
        printf("list is empty");
    }
    if(pos == 1){
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node* temp = head;
    for(int i=0; i<pos-2; i++){
        temp = temp->next;
    }
    struct node* del = temp->next;
    temp->next = del->next;
    free(del);
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

    head->data = 500;
    head->next = second;

    second->data = 600;
    second->next = third;

    third->data = 800;
    third->next = NULL;

    head = begining_delete(head);
    head = end_delete(head);
    head = pos_delete(head, 2);
    display(head);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

    struct node *head, *second, *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 500;
    head->next = second;

    second->data = 600;
    second->next = third;

    third->data  = 800;
    third->next = NULL;

    struct node* temp = head;
    while(temp != 0){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("Null");

    return 0;
}
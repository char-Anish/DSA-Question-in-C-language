#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* beggning(struct node* head, int value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    return head;
}
struct node* ending(struct node* head, int value){
    struct node* newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL){
        return newnode;
    }
    struct node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node* pos_insert(struct node* head, int value, int pos){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    if(pos == 1){
        newnode->next = head;
        head = newnode;
        return newnode;
    }
    struct node* temp = head;
    for(int i=0; i<pos-2; i++){
        temp=temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}
void display(struct node* head){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

int main(){
    struct node* head, *second, *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 100;
    head->next = second;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = NULL;

    head = beggning(head, 10);
    head = ending(head, 50);
    head = pos_insert(head,2,2);
    display(head);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

void display(struct node* head){
    if(head == NULL){
        return;
    }

    struct node* temp = head;
    do{
        printf("%d -> ",temp->data);
        temp = temp->next;

    }while(temp != head);
    printf("Back to head");
}

int main()
{
    struct node* head = NULL, *temp = NULL, *newnode;
    int i,n,value;
    printf("Enter the size of an list : ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter data : ");
        scanf("%d",&value);
        
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp->next = head;
    display(head);
    return 0;

}
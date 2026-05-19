#include<stdlib.h>
#include<stdio.h>
struct node{
    int coff;
    int exp;
    struct node* next;
};

struct node* add(struct node* p1, struct node* p2){
    struct node* result = NULL, *temp = NULL;
    
}
struct node* create(int c, int e){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->coff = c;
    temp->exp = e;
    temp->next = NULL;
    return temp;
}
void display(struct node* head){
    while(head != NULL){
        printf("%dx%d ",head->coff, head->exp);
        if(head->next != NULL){
            printf(" + ");
        }
        head = head->next;
    }
    printf("\n");
}
int main(){
    struct node* p1, *p2;

    p1 = create(3,2);
    p1->next = create(2,1);
    p1->next->next = create(1,0);

    p2 = create(4,2);
    p2->next = create(5,1);
    p2->next->next = create(2,0);

    printf("p1 ");
    display(p1);

    printf("p2 ");
    display(p2);

    return 0;
}
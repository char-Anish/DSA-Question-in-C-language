#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    int* temp;

    ptr = (int*)malloc(3 *sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter  3 elements\n");
    for(int i=0; i<3; i++){
        scanf("%d",&ptr[i]);
    }
    temp = (int*)realloc(ptr, 5 * sizeof(int));
    if(temp == NULL){
        printf("Memory reallocation failed\n");
        free(ptr);
        return 1;
    }

    ptr = temp;
    printf("Enter 2 more element\n");
    for(int i=3; i<5; i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}
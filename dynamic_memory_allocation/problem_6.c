#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Invalid size of array\n");
        return 0;
    }

    int* arr;

    arr = (int*)calloc(n, sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements\n");

    for(int i=0; i<n; i++){
        printf("No. %d = ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("Even elements are : ");

    int found = 0;

    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if(found == 0){
        printf("None");
    }

    free(arr);

    return 0;
}
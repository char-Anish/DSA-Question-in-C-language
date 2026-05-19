#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid size of an array\n");
        return 0;
    }
    int *arr;
    arr = (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        printf("No. %d = ",i);
        scanf("%d",&arr[i]);
    }

    int large = 0;

    printf("Elements are : ");
    for(int i=0; i<n; i++){
        if(large < arr[i]){
            large = arr[i];
        }
        printf("%d ",arr[i]);
    }

    printf("Largest element is : %d\n",large);
 
    free(arr);
    return 0; 
}
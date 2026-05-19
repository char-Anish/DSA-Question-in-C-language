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

    int *a;
    a = (int*)malloc(n * sizeof(int));

    printf("Enter the array elements\n");
    for(int i=0; i<n; i++){
        printf("No.%d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Elements are : ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
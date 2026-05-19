#include<stdio.h>
int main(){
    int n,i,key,flag = 0;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements of an array\n");
    for(i=0; i<n; i++){
        printf("No. %d = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be search : ");
    scanf("%d",&key);

    for(i=0; i<n; i++){
        if(a[i] == key){
            printf("Element found at position %d\n",i);
            flag  = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Element is not found\n");
    }
    return 0;
}
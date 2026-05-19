#include<stdio.h>
int main(){
    int n;
    printf("Enter an size of an array : ");
    scanf("%d",&n);

    int a[10], i;

    printf("Enter array elements\n");
    for(i =0; i<n; i++){
        scanf("%d",&a[i]);
    }

    n--;

    printf("Array after deletion\n");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
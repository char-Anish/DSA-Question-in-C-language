#include<stdio.h>
int main(){
    int n;
    printf("Enter an size of an array : ");
    scanf("%d",&n);

    int a[10], i, num, pos;

    printf("Enter array elements\n");
    for(i =0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter a element to be insert : ");
    scanf("%d",&num);

    printf("Enter the position to be insert : ");
    scanf("%d",&pos);

    for(i= n-1; i>= pos - 1; i--){
        a[i+1] = a[i];
    }
    a[pos - 1] = num;
    n++;

    printf("Array after insertion\n");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
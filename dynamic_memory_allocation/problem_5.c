#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,temp, count =0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number\n");
        return 0;
    }
    temp = n;
    while (temp != 0)
    {
        count++;
        temp /=10;
    }

    int *arr;
    arr = (int*)malloc(count * sizeof(int));
    
    temp = n;
    for(int i=0; i<count; i++){
        arr[i] = temp % 10;
        temp = temp / 10;
    }

    printf("Reverced number\n");
    for(int i=0; i<count; i++){
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
    
}
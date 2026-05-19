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
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    float avg = (float)sum / n;
    printf("Sum is %d\n",sum);
    printf("Average is %.2f\n",avg);
    free(arr);
    return 0; 
}
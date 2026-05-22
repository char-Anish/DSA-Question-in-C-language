#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid array size\n");
    }
    int arr[n];
    printf("Enter the element of an array \n");
    for(int i=0; i<n; i++){
        printf("No. %d = ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        int key = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[key]){
                key =j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }
    printf("Sorted element are : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
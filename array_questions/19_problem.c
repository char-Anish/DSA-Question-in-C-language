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
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Sorted element are : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
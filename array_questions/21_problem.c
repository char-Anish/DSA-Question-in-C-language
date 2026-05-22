#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid size of an array\n");
        return 0;
    }

    int a[n];
    for(int i=0; i<n; i++){
        printf("No. %d = ",i);
        scanf("%d",&a[i]);
        
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] == a[j]){
                for(int k = j; k < n-1; k++){
                    a[k] = a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;

}
#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter the size of first array : ");
    scanf("%d",&n1);

    printf("Enter the size of second array : ");
    scanf("%d",&n2);

    int arr1[n1], arr2[n2];
    printf("Enter first array elements\n");
    for (int i = 0; i < n1; i++)
    {
        printf("NO.%d = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("Enter Second array elements\n");
    for (int i = 0; i < n2; i++)
    {
        printf("NO.%d = ",i);
        scanf("%d",&arr2[i]);
    }
    
    printf("Intersection of an array : ");

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter the size of an first array : ");
    scanf("%d",&n1);
    if(n1 <= 0){
        printf("Invalid array size\n");
        return 0;
    }
    printf("Enter the size of an second array : ");
    scanf("%d",&n2);
    if(n2 <= 0){
        printf("Invalid array size\n");
        return 0;
    }

    int a1[n1], a2[n2], a3[n1+n2];
    int k=0;
    printf("Enter first array elements\n");
    for(int i=0; i<n1; i++){
        printf("No. %d = ",i);
        scanf("%d",&a1[i]);
    }

    printf("Enter second array elements\n");
    for(int i=0; i<n2; i++){
        printf("No. %d = ",i);
        scanf("%d",&a2[i]);
    }

    for(int i=0; i<n1; i++){
        a3[i] = a1[i];
        k++;
    }
    for(int i=0; i<n2; i++){
        int found =0;
        for(int j=0; j<k; j++){
            if(a2[i] == a3[j]){
                found =1;
                break;;
            }
        }
        if(found == 0){
            a3[k] = a2[i];
            k++;
        }
    }



    for(int i=0; i<k; i++){
        printf("%d ",a3[i]);
    }

    return 0;
}
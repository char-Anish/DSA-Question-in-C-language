#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the rows and coloums size\n");
    scanf("%d %d",&r, &c);

    int arr[r][c];

    printf("Enter the arrays elements\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){

            printf("Enter No. [%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
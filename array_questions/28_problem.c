#include<stdio.h>
int main(){
    int r,c;
    printf("Enter rows and coloums of the matrix\n");
    scanf("%d %d",&r, &c);

    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int t[c][r];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            t[j][i] = arr[i][j];
        }
    }
    printf("Transpose of matrix\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
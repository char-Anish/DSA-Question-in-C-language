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

    int sum =0;
    for(int i=0; i<r; i++){
        sum = 0;
        for(int j=0; j<c; j++){
            sum = sum + arr[i][j];
            
        }
        printf("sum = row is %d\n",sum);
    }

    return 0;
}
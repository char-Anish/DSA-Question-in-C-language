#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid index of an array\n");
        return 0;
    }

    int arr[n-1];
    printf("Enter arrays elements\n");
    for (int i = 0; i < n-1; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }

    int sum =0;
    for(int i=0; i<n-1; i++){
        sum = sum + arr[i];
    }
    int exp = n * (n+1) / 2;
    int miss = exp - sum;

    printf("Missing number is %d\n",miss);
    return 0;
}
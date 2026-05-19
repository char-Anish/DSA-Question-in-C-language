#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *arr;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("No. %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid size of an array\n");
        return 0;
    }

    int *a;
    a = (int *)malloc(n * sizeof(int));

    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("No.%d = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum is : %d\n",sum);

    free(a);
    return 0;
}
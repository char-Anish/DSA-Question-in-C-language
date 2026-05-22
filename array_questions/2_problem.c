#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        printf("%d ", arr[i]);
    }
    printf("\nThe sum is %d ", sum);
    return 0;
}
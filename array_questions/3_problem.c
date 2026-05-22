#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg;
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
    avg = (float)sum / n;
    printf("\nThe sum is %d ", sum);
    printf("\nThe Average is %.2f ", avg);

    return 0;
}
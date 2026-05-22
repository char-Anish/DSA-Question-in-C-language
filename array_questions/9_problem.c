#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid index of an array\n");
        return 0;
    }

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
        printf("%d ", arr[i]);
    }
    int max = arr[0], second = -1;

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }

    printf("\nLargest= %d\n", max);
    if (second == -1)
        printf("No Second largest element is found\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
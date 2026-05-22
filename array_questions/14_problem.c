#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size\n");
        return 0;
    }

    int arr[n];

    printf("Enter sorted array elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("No. %d = ", i);
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key element: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int first = -1, last = -1;

    // Find First Occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            first = mid;
            high = mid - 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    low = 0;
    high = n - 1;

    // Find Last Occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            last = mid;
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (first == -1)
    {
        printf("%d not found\n", key);
    }
    else
    {
        printf("First occurrence = %d\n", first);
        printf("Last occurrence = %d\n", last);
        printf("Total count = %d\n", last - first + 1);
    }

    return 0;
}
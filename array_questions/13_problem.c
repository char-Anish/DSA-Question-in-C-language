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
    printf("Enter the sorted arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }
    int key, mid, low = 0, high = n - 1, found = 0, count = 0;
    printf("Enter key element to be found : ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            printf("%d is found at index %d\n", key, mid);
            found = 1;
            count = 1;

            int left = mid - 1;
            int right = mid + 1;

            while (left >= 0 && arr[left] == key)
            {
                count++;
                left--;
            }
            while (right < n && arr[right] == key)
            {
                count++;
                right++;
            }
            break;
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
    if (found)
    {
        printf("The ocurrence of %d is = %d\n", key, count);
    }
    else
    {
        printf("%d is not found\n", key);
    }
    return 0;
}
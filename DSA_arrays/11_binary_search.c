#include <stdio.h>
int main()
{
    int n, i, key, flag = 0;

    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of an array\n");
    for (i = 0; i < n; i++)
    {
        printf("No. %d = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the key element to be found : ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    for (i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos])
            {
                pos = j;
            }
        }
        int temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (a[mid] > key)
        {

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found == 0)
    {
        printf("Element is not found\n");
    }

    return 0;
}
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

    printf("\nElement before sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        int key = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[key])
            {
                key = j;
            }
        }
        int temp = a[i];
        a[i] = a[key];
        a[key] = temp;
    }

    printf("\nElement After sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
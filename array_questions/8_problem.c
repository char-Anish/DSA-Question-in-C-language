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
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int f = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            f++;
        }
        else
        {
            printf("Frequency of %d is %d\n", arr[i-1], f);
            f=1;
        }
    }
    printf("Frequency of %d is %d\n", arr[n-1], f);
    
    return 0;
}
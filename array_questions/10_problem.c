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

    printf("Enter array elements\n");
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

    int isPalindrome = 1;

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\nArray is Palindrome\n");
    else
        printf("\nArray is Not Palindrome\n");

    return 0;
}
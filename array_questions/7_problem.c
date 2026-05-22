#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid index of an array\n");
        return 0;
    }

    int arr[n], a[n];
    printf("Enter arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        a[i] = arr[i];
    }
    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
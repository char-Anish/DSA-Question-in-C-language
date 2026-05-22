#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);
    if(n <= 0){
        printf("Invalid index size\n");
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
    printf("\n");
    int max = arr[0], min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Maximun = %d\n",max);
    printf("Minimun = %d\n",min);
    return 0;
}
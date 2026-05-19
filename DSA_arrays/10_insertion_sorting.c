
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

    for(int i=1; i<n; i++){
        int key = a[i];
        int j=i-1;

        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    printf("\nElement After sorting : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);

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
    int odd=0, even = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nEven number is %d\n",even);
    printf("Odd number is %d\n",odd);
    return 0;
}
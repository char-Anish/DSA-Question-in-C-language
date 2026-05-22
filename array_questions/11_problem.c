#include <stdio.h>
int main()
{
    int n, key;
    printf("Enter the size of the arrays : ");
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid index of an array\n");
        return 0;
    }

    int arr[n];
    printf("Enter arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be search : ");
    scanf("%d",&key);

    printf("The elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int found =0;

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            printf("%d is found at index %d\n",key,i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("%d is not found in the array\n",key);
    }
    return 0;
}
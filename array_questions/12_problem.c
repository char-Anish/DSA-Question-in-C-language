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
    printf("Enter the sorted arrays elements\n");
    for (int i = 0; i < n; i++)
    {
        printf("NO. %d = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element to be found : ");
    scanf("%d",&key);
 
    int low =0, high = n-1, mid, found =0;

    while(low <= high){
        mid = (low + high )/ 2;

        if(arr[mid] == key){
            printf("%d is found at index %d\n",key,mid);
            found = 1;
            break;
        }
        else if(key < arr[mid]){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    if(!found){
        printf("%d is not found in array\n",key);
    }
    return 0;
}
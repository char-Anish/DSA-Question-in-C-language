#include<stdio.h>

int main()
{
    int n;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Invalid array size\n");
        return 0;
    }

    int arr[n];

    printf("Enter the elements of an array\n");

    for(int i=0;i<n;i++){
        printf("No. %d = ",i);
        scanf("%d",&arr[i]);
    }

    int even[n];
    int k = 0;

    // Store even numbers
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[k] = arr[i];
            k++;
        }
    }

    // Bubble sort even numbers
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-i-1;j++)
        {
            if(even[j] > even[j+1])
            {
                int temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }

    printf("Sorted even numbers are:\n");

    for(int i=0;i<k;i++)
    {
        printf("%d ",even[i]);
    }

    return 0;
}
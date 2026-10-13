#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int low = 0, high = 4, mid;
    int found = 0;

    // Take element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
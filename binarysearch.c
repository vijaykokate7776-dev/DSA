
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;
    int key, low, high, mid, found = 0;

    // Take the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Check whether the size is valid
    if (n < 1 || n > 100)
    {
        printf("Please enter between 1 and 100 elements.\n");
        return 1;
    }

    // Take array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array in ascending order using Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Take the element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Initialize binary search boundaries
    low = 0;
    high = n - 1;

    // Perform binary search
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at position %d.\n", mid + 1);
            found = 1;
            break;
        }
        else if (key < arr[mid])
        {
            // Search the left half
            high = mid - 1;
        }
        else
        {
            // Search the right half
            low = mid + 1;
        }
    }

    // Display the result
    if (found == 0)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}

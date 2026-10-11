
#include <stdio.h>

int main()
 {
    int n, i, j, min, temp;

    // Accept the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Accept array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;

        // Find the smallest element in the unsorted part
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // Swap the smallest element with the first unsorted element
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // Display the sorted array
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

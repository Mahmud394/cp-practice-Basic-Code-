#include <stdio.h>

void insertionSort(int arr[], int n) // O(n^2) in the average and worst case, and O(n) in the best case
{
    
    int i, j, temp;

    // Outer loop for traversing the array
    for (i = 1; i < n; i++) {
        temp = arr[i]; // Store the current element
        j = i - 1;

        // Shift elements of the sorted part to make space for the current element
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the current element in its correct position
        arr[j + 1] = temp;
    }
}

int main() {
    int n, i;

    // Taking array size input from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Displaying the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting the array using Insertion Sort
    insertionSort(arr, n);

    // Displaying the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
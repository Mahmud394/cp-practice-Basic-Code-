#include <stdio.h>

// Partition function: Places pivot in the correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choosing first element as pivot
    int i = low + 1; // Left side iterator
    int j = high;     // Right side iterator

    while (i <= j) { // Find element greater than pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Find element smaller than pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        // Swap elements if needed
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with arr[j] to put it in the correct place
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; // Return pivot position
}
// Quick Sort function (Recursive)
void quickSort(int arr[], int low, int high)  //O(n log n) on average, and O(n^2) in the worst case
 {
    if (low < high) {
        int pivotIndex = partition(arr, low, high); // Get pivot index
        quickSort(arr, low, pivotIndex - 1); // Sort left subarray
        quickSort(arr, pivotIndex + 1, high); // Sort right subarray
    }
}

int main() {
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1); // Corrected the call to quickSort

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
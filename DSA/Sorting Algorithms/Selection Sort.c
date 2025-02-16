#include <stdio.h>

int main() {
    int n, i, j, min, temp;

    // Taking array size input
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n]; // Array declaration

    // Taking array elements input
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        min = i; // Assume current index as minimum

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j; // Update minimum index
            }
        }

        // Swap if a smaller element is found
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    // Printing the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
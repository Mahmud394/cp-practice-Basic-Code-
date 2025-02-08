#include <stdio.h>

int main() {
    int arr[100], n, element;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted at the frist: ");
    scanf("%d", &element);

    // Shift array elements to the right by one position
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the frist
    arr[0] = element;
    n++; // Increment the size of the array

    // Print the array after insertion
    printf("Array after inserting the element: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

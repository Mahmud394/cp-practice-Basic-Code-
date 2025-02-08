#include <stdio.h>

int main() {
    int arr[100], n, element, pos;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Input the position where the element is to be inserted
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &pos);

    // Shift array elements to the right by one position from the position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[pos - 1] = element;
    n++; // Increment the size of the array

    // Print the array after insertion
    printf("Array after inserting the element: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


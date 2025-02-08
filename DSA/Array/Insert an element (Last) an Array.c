#include <stdio.h>

int main() {

    int arr[100];

    int n, element, i;

    printf("Enter the number of elements in the array: ");

    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }

    printf("Enter the element to insert at the last position: ");

    scanf("%d", &element);

    arr[n] = element;

    n++;  // Increase the size of the array

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    return 0;

}



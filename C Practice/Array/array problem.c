/*Write a program to find the index of a given element in an array.
 If the element exists in the array, 
return its index; otherwise, return -1 to 
indicate that the element was not found*/

#include <stdio.h>

int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int size, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &target);
    int index = findIndex(arr, size, target);
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

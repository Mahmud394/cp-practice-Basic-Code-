#include <stdio.h>


int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;


        if (arr[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int size, i, target ;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    int arr[size];


    printf("Enter %d sorted elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   printf("Enter the element to search: ");
    scanf("%d",&target);
    int result = binarySearch(arr, 0, size - 1, target);


    if (result != -1) {
        printf("Number %d found at index %d\n", target, result);
    } else {
        printf("Number %d is not found in the array.\n", target);
    }

    return 0;
}


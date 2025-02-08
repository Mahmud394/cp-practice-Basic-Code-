#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; // To prevent overflow

        // Check if target is present at mid
        if (arr[mid] == target)
        {
            return mid;
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else
        {
            high = mid - 1;
        }
    }

    // If we reach here, the element was not present
    return -1;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }

    return 0;
}


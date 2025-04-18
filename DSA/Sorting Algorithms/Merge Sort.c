#include <stdio.h>

void mergeSort(int A[], int low, int high)  //O(n log n) 
 {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);

        int i = low, j = mid + 1, k = 0;
        int B[high - low + 1];

        while (i <= mid && j <= high) {
            if (A[i] <= A[j]) {
                B[k++] = A[i++];
            } else {
                B[k++] = A[j++];
            }
        }
        

        while (i <= mid) {
            B[k++] = A[i++];
        }

        while (j <= high) {
            B[k++] = A[j++];
        }

        for (i = low, k = 0; i <= high; i++, k++) {
            A[i] = B[k];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    mergeSort(A, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
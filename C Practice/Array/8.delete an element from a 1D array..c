// Write a program to delete an element from a 1D array.

#include <stdio.h>
int main()
{
    int arr[100];
    int i, size, pos;
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter %d elements in array : ",size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Input element position to delete
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    // Invalid delete position
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        // Copy next element value to current element
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        // Decrement array size by 1
        size--;

        // Print array after deletion
        printf("Elements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

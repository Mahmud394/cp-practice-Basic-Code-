/*Write a C program to find the largest elements in an array of integers.
Enter 10 integers: 5 9 2 7 3 1 8 6 4 10
Largest element: 10
*/
//mahmud 394
#include <stdio.h>
int main()
{

    int arr[] = {5 ,9 ,2, 7, 3, 1, 8, 6, 4, 10 };
    int length = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for (int i = 0; i < length; i++)
        {
       if(arr[i] > max)
           max = arr[i];
        }
    printf("Largest element: %d\n", max);
    return 0;
}


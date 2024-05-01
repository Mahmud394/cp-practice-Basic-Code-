#include <stdio.h>
int main ()
{
    int arr[20], i, j, k, N;
    printf ("The number of elements in an array: ");
    scanf (" %d", &N);
    printf (" \n Enter %d elements of an array: ", N);
    for ( i = 0; i < N; i++)
    {
        scanf (" %d", &arr[i]);
    }
    for ( i = 0; i < N; i ++)
    {
        for ( j = i + 1; j < N; j++)
        {
            if ( arr[i] == arr[j])
            {
                for ( k = j; k < N - 1; k++)
                {
                    arr[k] = arr [k + 1];
                }
                N--;
                j--;
            }
        }
    }
    printf ("\nArray elements after deletion of the duplicate elements: ");
    for ( i = 0; i < N; i++){
        printf (" %d ", arr[i]);}
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[]={2,4,7,2,7,8,9,4,5,6}, i, j, k, N=10;

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


// Print an array that outputs only the odd number from the array.

#include<stdio.h>
int main ()
{
    int X,i;
    printf("Enter array size :");
    scanf("%d",&X);
    int A[X];
     printf("Enter array elemant :");
    for( i=0;i<X;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("odd number :");

    for( i=0;i<X;i++)
    {
        if(A[i]%2!=0)
            {
       printf("%d ",A[i]);
        }
    }


}


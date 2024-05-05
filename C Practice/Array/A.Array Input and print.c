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
    printf("Array :");
    for( i=0;i<X;i++)
    {
       printf("%d ",A[i]);
    }


}

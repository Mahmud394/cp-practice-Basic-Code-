//Write a program that prints arrays in reverse order.

#include<stdio.h>
int main ()
{
    int X,i,sum=0;
    printf("Enter array size :");
    scanf("%d",&X);
    int A[X];
     printf("Enter %d array elemant :",X);
    for( i=0;i<X;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("reverse Array :");
     for(int i=X-1;i>=0;i--)
     {
         printf("%d ",A[i]);
     }



}

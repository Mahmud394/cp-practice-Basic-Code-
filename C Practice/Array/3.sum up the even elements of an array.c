// Write a program to sum up the even elements of an array.

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
    printf("sum up the even elements :");

    for( i=0;i<X;i++)
    {
        if(A[i]%2==0)
        {
           sum=sum+A[i];
        }
    }
    printf("%d ",sum);

}

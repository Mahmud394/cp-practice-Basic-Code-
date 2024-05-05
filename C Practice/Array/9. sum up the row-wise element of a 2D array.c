// Write a program to sum up the row-wise element of a 2D array.

#include<stdio.h>
int main ()
{
    int i,j,col,row;
    int A[10][10];
    printf("Enter the number of row and col :");
    scanf("%d %d",&row,&col);

    printf("Enter element of A matrix :\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A=");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<row;i++)
    {
        int sum=0;
        for(j=0;j<col;j++)
        {
            sum = sum + A[i][j] ;

        }
        printf("sum of %d row = %d\n",i+1,sum);
    }


}


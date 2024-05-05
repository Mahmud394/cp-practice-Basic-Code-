// Write a program to sum up column-wise element of a 2D array.

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
      for(j=0;j<col;j++)
    {
        int sum=0;
      for (i=0;i<row;i++)
        {
            sum = sum + A[i][j] ;

        }
        printf("sum of %d column = %d\n",j+1,sum);
    }


}



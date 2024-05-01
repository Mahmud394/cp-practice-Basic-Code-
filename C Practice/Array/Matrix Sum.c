#include<stdio.h>
int main ()
{
    int i,j,col,row;
    int A[10][10],B[10][10],C[10][10];
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

       printf("Enter element of B matrix :\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
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

       printf("B=");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d",B[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

    }

       printf("A+B = \n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d",C[i][j]);
        }

        printf("\n");
    }

}

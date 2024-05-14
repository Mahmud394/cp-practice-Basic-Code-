#include<stdio.h>
int main ()
{
    int i,j,row ,col,A[10][10],sum=0;
    printf("Enter number of row and col :");
    scanf("%d %d",&row,&col);
    printf("Enter all the elements of the matrix :\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("\nMatrix :\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Sum of diagonal element : %d",sum);
    
}
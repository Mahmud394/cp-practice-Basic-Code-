//sum of upper and lower triagles element
#include<stdio.h>
int main ()
{
    int i,j,row ,col,A[10][10],uppersum=0,lowersum=0;
    printf("Enter number of row and col :");
    scanf("%d %d",&row,&col);
    printf("Enter all the elements of the matrix :\n");
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);
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
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if (i<j)
            {
                uppersum = uppersum + A[i][j];
            }
            if(i>j)
            {
                lowersum = lowersum + A[i][j];
            }

        }
    }
    printf("UPPeRSUM = %d\n",uppersum);
    printf("LOWERSUN = %d\n",lowersum);
}

#include<stdio.h>
int main ()
{

    int i,j,k,c1,c2,r2,r1,sum=0;

    int first[15][15],second[15][15],result[15][15];

    printf("Enter the number of row and col of first matrix :");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of row and col of second matrix :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("ERROR !! give col of frist matris and row of second matrix are same... \n");
           printf("Enter the number of row and col of first matrix :");
           scanf("%d %d",&r1,&c1);
         printf("Enter the number of row and col of second matrix :");
          scanf("%d %d",&r2,&c2);
    }

    printf("Enter element of first matrix :\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

       printf("Enter element of second matrix :\n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }


     for (i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           for (k=0;k<c1;k++){
                sum =sum + first[i][k] * second[k][j];}
        result[i][j] = sum;
        sum = 0;

        }

    }


    printf("first=\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t");
            printf("%d",first[i][j]);
        }
        printf("\n");
    }


       printf("second=\n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",second[i][j]);
        }
        printf("\n");
    }


       printf("\nresult =\n ");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",result[i][j]);
        }
           printf("\t");
        printf("\n");
    }

}



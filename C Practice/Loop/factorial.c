#include<stdio.h>
int main ()
{
    int N;
    int fact=1;
    printf("enter any positive number:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
       fact = fact * i;
    }
     printf("%d  ",fact);
}

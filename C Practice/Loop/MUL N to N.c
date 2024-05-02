#include<stdio.h>
int main ()
{
    int N,M;
    int a=1,b=2,sum=0;
    printf("enter two number:");
    scanf("%d %d",&N,&M);
        printf("(1*2)+(2*3)+(3*4)+....+(%d*%d)= ",N,M);
        while(a<=N && b<=M)
        {
            sum= sum+(a*b);
            a++;
            b++;
        }
        printf("%d",sum);

}


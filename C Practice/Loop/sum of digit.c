#include<stdio.h>
int main ()
{
    int N;
    int temp,r,sum=0;
    printf("enter any digit:");
    scanf("%d",&N);
    temp=N;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("Sum of digit : %d",sum);
}


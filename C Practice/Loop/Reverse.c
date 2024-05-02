#include<stdio.h>
int main ()
{
    int N;
    int sum=0,r,temp;
    printf("enter any  number:");
    scanf("%d",&N);
   temp=N;
   while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("Sum of digit : %d",sum);
}


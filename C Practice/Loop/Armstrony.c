#include<stdio.h>
int main ()
{
    int temp,sum=0,r;
    int n;
    printf("Enter any number 1-500 :");
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

}

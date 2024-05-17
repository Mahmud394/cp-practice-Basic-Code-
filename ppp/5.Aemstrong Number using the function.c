#include<stdio.h>
int armstrony(int n)
{
    int temp,sum=0,r;
     temp = n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    return sum;
}
int main ()
{
    int m;
    printf("Enter any number  :");
    scanf("%d",&m);
   int result = armstrony(m);
    if(m==result) {
        printf("Armstrong");
    }
    else {
        printf("Not Armstrong");
    }
}

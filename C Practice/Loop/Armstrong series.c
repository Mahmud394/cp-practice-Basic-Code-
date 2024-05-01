#include<stdio.h>
int main ()
{
    int temp,sum=0,r;
    int n;
    for(int i=1;i<=500;i++){
    temp = i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(i==sum)
    {
        printf("%d ",i);
    }
    sum=0;
    }

}


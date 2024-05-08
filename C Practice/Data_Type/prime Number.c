#include<stdio.h>
#include<stdbool.h>
int main ()
{
    bool prime_N=true;
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime_N=false;
        }
    }
    if(prime_N==true)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}

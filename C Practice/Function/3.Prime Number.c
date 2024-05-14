#include<stdio.h>
#include<stdbool.h>
bool prime_N(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(prime_N (n))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}

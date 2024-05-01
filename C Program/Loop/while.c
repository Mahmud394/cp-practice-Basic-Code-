#include<stdio.h>
int main ()
{
    int a=1;
    while(a*a*a<150)
    {
        printf("%5d",a*a*a);
        a++;
    }
}

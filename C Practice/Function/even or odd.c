#include<stdio.h>
void A(int a)
{
    if(a%2==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }

}
int main ()
{
    int n;
    scanf("%d",&n);
    A(n);
}
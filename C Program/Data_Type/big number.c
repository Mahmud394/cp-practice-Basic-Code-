#include<stdio.h>
int main()
{
    int a=10, b=10,c=5;
    if(a>b && a>c)
    {
        printf("A is big");
    }
    else if(b>a && b>c)
    {
        printf("B is big");
    }
    else if (a==b)
    {
        printf("A and B is big");
    }
    else if (a==c)
    {
        printf("A amd C is big");
    }
    else if (b==c)
    {
        printf("B and C is big");
    }
    else
    {
        printf("C is big");
    }
    getch ();
}

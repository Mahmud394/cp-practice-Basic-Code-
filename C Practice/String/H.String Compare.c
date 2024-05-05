#include<stdio.h>
int main ()
{
    char A[]="Mahmud Un Nabi";
    char B[] ="Mahmud";
    int d;
    d= strcmp (A,B);
    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    {
         printf("Strings are not equal");
    }
}

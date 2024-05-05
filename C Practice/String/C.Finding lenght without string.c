#include<stdio.h>
int main ()
{
    char s1[]="Mahmud Un Nabi";
    int len=0,i=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Length = %d",len);
}

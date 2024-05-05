#include<stdio.h>
int main ()
{
    char s[30];
    int i=0;
    gets(s);
    strrev(s);
    printf("reverse : %s\n",s);

     printf("Display string Charcter-wise :\n");
    while (s[i]!='\0')
    {
        printf("\t");
        printf(" %c\n",s[i]);
        i++;
    }
}


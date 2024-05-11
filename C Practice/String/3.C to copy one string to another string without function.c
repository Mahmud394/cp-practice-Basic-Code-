#include<stdio.h>
int main ()
{
    char s1[100],s2[100];
    printf("Enter  s1 string  :");
    scanf("%s",&s1);
    int n= strlen (s1);
    for(int i=0;i<n;i++)
    {
        s2[i]=s1[i];
    }
    s2[n]='\0';
    printf("s2 = %s",s2);
}
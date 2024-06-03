#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[100],s2[100];
    gets(s1);
    int len = strlen(s1);
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s2[j]=s1[i]-32;
            j++;
        }
       else  if(s1[i]>='A' && s1[i]<='Z')
        {
            s2[j]=s1[i]+32;
            j++;
        }
    }
    s2[j]='\0';
    puts(s2);
}
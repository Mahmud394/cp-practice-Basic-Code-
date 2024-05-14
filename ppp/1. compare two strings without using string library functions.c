#include<stdio.h>
int main ()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
   int i=0;
   while(s1[i] == s2[i] && s1[i]!='\0')
   {
    i++;
   }
   if(s1[i] == s2[i])
   {
    printf("Strings are equal");
   }
   else{
    printf("Strings are noy equal");
   }
}
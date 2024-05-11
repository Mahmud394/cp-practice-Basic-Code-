#include<stdio.h>
int main ()
{
    char s[100],ch;
    printf("Enter a string :");
    gets(s);
    int i=0,word=0;
    while((ch=s[i])!='\0')
    {
        if (ch== ' ')
            word++;
            i++;
    }
    word++;
     printf("Number of word = %d\n",word);


}
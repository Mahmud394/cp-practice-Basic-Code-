#include<stdio.h>
int main ()
{
    char s[100];
    gets(s);
    int alphabets =0 ,digits =0, special_characters=0;
    int n= strlen (s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
        {
            alphabets++;
        }
        else if (s[i]>='0' && s[i]<='9')
        {
            digits ++;
        }
        else{
            special_characters++;
        }
    }
    printf("Number of Alphabets in the string is : %d\n",alphabets);
     printf("Number of digits in the string is : %d\n",digits);
      printf("Number of special_characters in the string is : %d\n",special_characters);
      return 0;
}
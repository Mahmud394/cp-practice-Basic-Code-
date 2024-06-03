#include<stdio.h>
int main ()
{
    char s[100];
    gets(s);        
    int n=strlen(s);
    int palindrome =1;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            palindrome=0;
        }
    }
        if(palindrome)
        {
            printf("palindrome");
        }
        else
        {
            printf("Not palindrome");
        }
}

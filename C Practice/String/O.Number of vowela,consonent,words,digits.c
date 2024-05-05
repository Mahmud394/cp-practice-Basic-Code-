#include<stdio.h>
int main ()
{
    char s[100],ch;
    printf("Enter a string :");
    gets(s);
    int i,vowel,consonent,digit,word,other,capital,small,length;
    i=vowel=consonent=digit=word=other=length=0;
    while((ch=s[i])!='\0')
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        vowel ++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')  )
            consonent ++;
        else if(ch>='0'  && ch<='9')
            digit++;
        else if (ch== ' ')
            word++;
        else
            other ++;
        i++;
        length ++;
    }
    word++;
     printf("Length = %d\n",length);
    printf("Number of word = %d\n",word);
    printf("Number of vowel = %d\n",vowel);
    printf("Number of consonent = %d\n",consonent);
     printf("Number of digit = %d\n",digit);
    printf("Number of other = %d\n",other);

}
